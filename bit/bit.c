#include <stdio.h>

struct B
{
    int a : 2;
    unsigned int b : 4;
};

int main()
{
    struct B b;
    b.a = 3;
    b.b = 8;
    printf("a = %d\nb = %d\n", b.a, b.b);

    return 0;
}