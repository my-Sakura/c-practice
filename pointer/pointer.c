#include <stdio.h>

int max(int a, int b)
{
    if (a < b)
    {
        return b;
    }
    return a;
}

int main()
{
    int v = 1;
    int *p1 = NULL;
    p1 = &v;
    printf("&v = %p\np1 = %p\n*p1 = %d\n", &v, p1, *p1);

    int (*p)(int, int) = &max;
    int m = p(1, 2);
    printf("max(1, 2) = %d\n", m);

    return 0;
}