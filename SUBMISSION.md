# csx730-strace Submission

## Group Member Names

* Name 810 4730
* Name 810 6730

## Necessary Conditions

1. **CONDITION.** Definition.

2. **CONDITION.** Definition.

3. **CONDITION.** Definition.

4. **CONDITION.** Definition.

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
EDGES IN INDUCED RAG HERE
```

```
CYCLE HERE
```

### `NTHREAD = 4`

```
SAMPLE HERE
```

```
EDGES IN INDUCED RAG HERE
```

```
CYCLE HERE
```

### `NTHREAD = 5`

```
SAMPLE HERE
```

```
EDGES IN INDUCED RAG HERE
```

```
CYCLE HERE
```

## Banker's Algorithm


### Data Structures

1. **NAME.** Definition.

2. **NAME.** Definition.

3. **NAME.** Definition.

4. **NAME.** Definition.

### Safety Algorithm Example

```
SAMPLE HERE
```


