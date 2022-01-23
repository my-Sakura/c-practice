#include <stdio.h>
#include <errno.h>
// #include <string.h>

int main()
{
    FILE *pf;
    int errnum;
    pf = fopen("unexist.txt", "rb");
    if (pf == NULL)
    {
        fprintf(stderr, "error code: %d\n", errno);
        // equal to fprintf(stderr, "open file error: %s\n", strerror(errnum));
        perror("open file error");
    }
    else
    {
        fclose(pf);
    }

    return 0;
}
