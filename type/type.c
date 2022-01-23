#include <stdio.h>

int main()
{
    char a;
    short b;
    int c;
    float d;
    double e;
    long double f;
    // 1 2 2/4 4 8 16
    printf("char = %d, short = %d, int = %d, float = %d, double = %d, long double = %d\n", sizeof(a), sizeof(b), sizeof(c), sizeof(d), sizeof(e), sizeof(f));
}