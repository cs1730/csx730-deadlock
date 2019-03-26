#ifndef DEADLOCK_H
#define DEADLOCK_H

#include <stdlib.h>

size_t encode(size_t tid, size_t ord) {
  return (tid << 16) + ord;
} // encode

size_t get_tid(size_t encoded) {
  return encoded >> 16;
} // get_tid

size_t get_ord(size_t encoded) {\
  return encoded & 0xFFFF;
} // get_ord

#endif /* DEADLOCK_H */

