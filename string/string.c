#include <stdio.h>

int main()
{
    char s[] = {'h', 'e', 'l', 'l', 'o', '\0'};
    printf("s = %s\n", s);

    char *str = "hello world";
    printf("s = %s\n", str);
    return 0;
}