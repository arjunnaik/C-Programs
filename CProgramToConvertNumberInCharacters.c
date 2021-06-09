#include <stdio.h>
void main()
{
    int n = 412, ans = 0;
    while (n > 0)
    {
        int t = n % 10;
        ans = ans * 10 + t;
        n = n / 10;
    }
    while (ans > 0)
    {

        int t = ans % 10;

        switch (t)
        {
        case 0:
            printf("zero ");
            break;
        case 1:
            printf("one ");
            break;
        case 2:
            printf("two ");
            break;
        case 3:
            printf("three ");
            break;
        case 4:
            printf("four ");
            break;
        case 5:
            printf("five ");
            break;
        case 6:
            printf("six ");
            break;
        case 7:
            printf("seven ");
            break;
        case 8:
            printf("eight ");
            break;
        case 9:
            printf("nine ");
            break;
        default:
            printf("Did not match!");
        }
        ans = ans / 10;
    }
}