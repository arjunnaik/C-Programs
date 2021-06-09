#include <stdio.h>
void main()
{
    int fib1 = 1, fib2 = 1, fib3 = 1;

    int n = 10;
    for (int i = 1; i <= n; i++)
    {
        int fib1 = 1, fib2 = 1, fib3 = 1;
        for (int j = 1; j <= i; j++)
        {
            if (j > 2)
            {
                fib3 = fib2 + fib1;
                fib1 = fib2;
                fib2 = fib3;
            }
            printf("%d\t", fib3);
        }
        printf("\n");
    }
}