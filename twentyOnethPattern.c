#include <stdio.h>
int main()
{
    for (int i = 1; i <= 9; i++)
    {
        for (int j = i; j >= 1; j--)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}