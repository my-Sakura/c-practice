#include <stdio.h>

union Data
{
    int a;
    char b;
};

int main()
{
    union Data data;
    data.a = 1;
    printf("a = %d\nb = %c\n", data.a, data.b);
    data.b = 'b';
    printf("a = %d\nb = %c\n", data.a, data.b);

    return 0;
}