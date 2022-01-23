#include <stdio.h>

struct B;

struct A
{
    struct B *b;
};

struct B
{
    struct A *a;
};

int main()
{
    struct B b;
    struct A a;
    a.b = &b;
    b.a = &a;

    printf("&a = %p\nb.a = %p\n&b = %p\na.b=%p\n", &a, b.a, &b, a.b);

    return 0;
}