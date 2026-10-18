#include <stdio.h>
int main()
{
    int a, sum = 0;
    printf("Enter the number: ");
    scanf("%d", &a);
    if (a > 99 && a < 1000)
    {
        for (; a > 0; a = a / 10)
        {
            sum = sum + (a % 10);
        }
        printf("The sum of the digits is %d", sum);
    }
    else
    {
        printf("The number is not a three-digit number");
    }
    return 0;
}