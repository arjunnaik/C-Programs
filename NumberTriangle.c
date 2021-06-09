#include <stdio.h>
void main()
{

    int n = 7;
    for (int i = 1; i <= n; i++)
    {
        int c = 1;
        for (int l = 1; l <= n - i; l++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%d", c);
            c++;
        }
        c--;
        for (int k = 1; k < i; k++)
        {
            c--;
            printf("%d", c);
        }
        printf("\n");
    }
}