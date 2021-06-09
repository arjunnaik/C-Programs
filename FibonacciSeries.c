#include <stdio.h>
int main()
{
    int fib1 = 0, fib2 = 1, fib3;
    int n;
    scanf("%d", &n);
    printf("%d %d ", fib1, fib2);
    while (n >= 2)
    {
        fib3 = fib1 + fib2;
        printf("%d ", fib3);
        fib1 = fib2;
        fib2 = fib3;
        n--;
    }

    return 0;
}