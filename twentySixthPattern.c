#include <stdio.h>

int main()
{
    int k = 1;
    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", k++ % 2);
        }
        printf("\n");
    }

    return 0;
}