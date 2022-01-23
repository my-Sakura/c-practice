#include <stdio.h>

typedef struct
{
    int a;
    int b;
} Data;

int main()
{
    Data data;
    data.a = 1;
    data.b = 2;
    printf("a = %d\nb = %d\n", data.a, data.b);

    return 0;
}