#include <stdio.h>
int main()
{
    for (int i = 0; i <= 9; i++)
    {
        for (int j = 9; j >= 1; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}