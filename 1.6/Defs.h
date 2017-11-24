#ifndef DEF_H
#define DEF_H

#include <stdio.h>
#define PRINT1(a) (printf("%c\n", a))
#define PRINT2(a, b) (printf("%c %c\n", a, b))
#define MAX2(x, y) (x > y? x : y)
#define MAX3(x, y, z) (MAX2(x, y) > z ?  MAX2(x, y) : z)

#endif

