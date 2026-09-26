#include <stdio.h>
int main()
{
    int a;
    printf("Enter the number: ");
    scanf("%d", &a);
    if (a>99&&a<1000)
    {
        printf("The result is %d", a%10);
    }
    else
    {
        printf("The number is not a three-digit number");
    }
    return 0;
}