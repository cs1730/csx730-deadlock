#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <semaphore.h>
#include "deadlock.h"

// number of instances of r0 and r1
#define R0LIMIT 1
#define R1LIMIT 1

// number of threads
#define NTHREAD 1

sem_t r0;
sem_t r1;

#define wait(tid, rid, r) do {		    \
  printf("t%zu waits on r%zu\n", tid, rid); \
  sem_wait(r);				    \
  printf("t%zu acquired r%zu\n", tid, rid); \
} while (0)

#define post(tid, rid, r) do {		    \
  sem_post(r);				    \
  printf("t%zu released r%zu\n", tid, rid); \
} while (0)

void * thread_func(void * op) {
  size_t tid = get_tid((size_t) op);  
  size_t ord = get_ord((size_t) op);
  for (;;) {
    wait(tid, (ord) ? 0 : 1, (ord) ? &r0 : &r1);
    wait(tid, (ord) ? 1 : 0, (ord) ? &r1 : &r0);    
    printf("%zu - crit!\n", tid);
    post(tid, (ord) ? 1 : 0, (ord) ? &r1 : &r0);
    post(tid, (ord) ? 0 : 1, (ord) ? &r0 : &r1);    
  } // for 
} // thread_func

int main() {
  setvbuf(stdout, NULL, _IONBF, 0); // disable output buffering
  sem_init(&r0, 0, R0LIMIT);        // initialize r0
  sem_init(&r1, 0, R1LIMIT);        // initialize r1
  for (int i = 0; i < NTHREAD; ++i) {
    pthread_t * th = malloc(sizeof(pthread_t));
    pthread_create(th, NULL, thread_func, (void *) encode(i, i % 2));
  } // for
  for (;;);
  return 0;
} // main
