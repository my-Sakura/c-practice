#include <stdio.h>

void add()
{
    static int a = 0;
    a++;
    printf("a = %d\n", a);
}

int main()
{
    for (int i = 0; i < 10; i++)
    {
        add();
    }

    return 0;
}