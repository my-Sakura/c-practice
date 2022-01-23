#include <stdio.h>
#include <stdlib.h>

enum Color
{
    red = 1,
    blue,
    yellow
};

int main()
{
    enum Color favorite_color;
    printf("please select your favorite color: (1.red 2.blue 3.yellow) \n");
    scanf("%u", &favorite_color);
    switch (favorite_color)
    {
    case red:
        printf("your favorite color is red");
        break;

    case blue:
        printf("your favorite color is blue");
        break;

    case yellow:
        printf("your favorite color is yellow");
        break;

    default:
        printf("you do not select favorite color");
        break;
    }
}