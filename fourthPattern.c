#include <stdio.h>

int main()
{
    char alphabets[9] = "ABCDEFGHI";

    for (int i = 1; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            printf("%c ", alphabets[j]);
        }
        printf("\n");
    }

    return 0;
}