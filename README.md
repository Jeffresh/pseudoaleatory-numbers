# Generating Pseudoaleatory numbers.

Generating pseudo-aleatory numbers in c++.

## Libraries:

```c++

#include<iostream>
#include<stdlib.h>
#include<ctime>
```
## Functions:


```c++

srand(ùnsigned_integer);
rand();
time(0):

```

### srand():

we will use this function to set a seed for rand, so we will use it combined with the function time(), so the sequence of numbers that we will generate will be diferent. In case that we want generate the same sequence, just dont use this function.

### rand():

Rand generate pseudo-aleatory numbers.

### time(0):

Returns the actual time.
