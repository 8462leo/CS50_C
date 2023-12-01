#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int h;
    do
    {
        h = get_int("What is the height? ");
    }
    while (h < 1 || h > 8);

    for (int i = 0; i < h; i++)
    {
        for (int p = 0; p < h - i - 1; p++) //...
        {
            printf(" ");
        }
        for (int j = 0; j <= i; j++) //###
        {
            printf("#");
        }
        printf("\n");
    }
}
