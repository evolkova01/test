#include <stdio.h>

#include "myfunc.h"
#include "solve.h"

int main()
{
    solves s = solve (1, 2, 3);
    printf("%f %f %d\n", s.x1, s.x2, s.count);

    printf("Hello World!\n");
    return myfunc(2);
}
