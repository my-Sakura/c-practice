#include <stdio.h>

int main()
{
    int array[] = {1, 2, 3};
    int b[3];
    b[0] = 1;
    b[1] = 2;
    b[2] = 3;
    for (int i = 0; i < 3; i++)
    {
        printf("a = %d, b = %d\n", array[i], b[i]);
    }

    return 0;
}