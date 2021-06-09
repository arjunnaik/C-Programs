#include <stdio.h>
void main()
{

    int n = 15;
    for (int i = 1; i <= n; i++)
    {
        char c = 'A';
        for (int l = 1; l <= n - i; l++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%c", c);
            c++;
        }
        c--;
        for (int k = 1; k < i; k++)
        {
            c--;
            printf("%c", c);
        }
        printf("\n");
    }
}