#include <stdio.h>
int main()
{
    for (int i = 1; i <= 9; i++)
    {
        for (int k = 9; k >= i; k--)
        {
            printf(" ");
        }

        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}