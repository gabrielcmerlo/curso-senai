#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 10;
    int *p;

    p = (int *)malloc(sizeof(int));

    if (p == NULL)
    {
        return 1;
    }

    *p = a;

    printf("a = %d, *p = %d\n", a, *p);

    *p = 20;

    printf("a = %d, *p = %d\n", a, *p);

    free(p);

    return 0;
}