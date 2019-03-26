# csx730-strace Submission

## Group Member Names

* Name 810 4730
* Name 810 6730

## Necessary Conditions

1. **CONDITON.** Definition.

2. **CONDITON.** Definition.

3. **CONDITON.** Definition.

4. **CONDITON.** Definition.

## Resource Allocation Graphs

### `NTHREAD = 2`

```
t1 waits on r0
t1 acquired r0
t1 waits on r1
t1 acquired r1
1 - crit!
t1 released r1
t1 released r0
t1 waits on r0
t1 acquired r0
t0 waits on r1
t0 acquired r1
t1 waits on r1 
t0 waits on r0
```

```
r0 → t1
r1 → t0
t1 → r1
t0 → r0
```

```
r0 → t1 → r1 → t0 → r0
```

### `NTHREAD = 3`

```
SAMPLE HERE
```

```
EDEGES IN RESULTING RAG HERE
```

```
CYCLE
```

### `NTHREAD = 4`

```
SAMPLE HERE
```

```
EDEGES IN RESULTING RAG HERE
```

```
CYCLE
```

### `NTHREAD = 5`

```
SAMPLE HERE
```

```
EDEGES IN RESULTING RAG HERE
```

```
CYCLE
```

## 

Write details here...

