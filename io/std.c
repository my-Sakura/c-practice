#include <stdio.h>

int main()
{
    printf("please input your name: ");
    char input[10];
    scanf("%s", input);

    printf("your name is %s\n", input);

    return 0;
}