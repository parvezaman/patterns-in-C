#include <stdio.h>
int main()
{
    for (int i = 9; i >= 1; i--)
    {
        for (int j = 9; j >= 1; j--)
        {
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}