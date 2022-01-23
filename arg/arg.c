#include <stdio.h>

int main(int argc, char *argv[])
{
    printf("prgram name is: %s\n", argv[0]);

    if (argc == 2)
    {
        printf("your input arg is: %s\n", argv[1]);
    }
    else
    {
        printf("please input only one arg\n");
    }

    return 0;
}