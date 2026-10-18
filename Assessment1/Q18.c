#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the number: ");
    scanf ("%d", &a);
    if (a>99 && a<1000)
    {
        b = a%10;
        a = (a-b) + 2;
        printf("Result: %d", a);
    }
    else
    {
        printf("Invalid input. Please enter a three-digit number.");
    }
    return 0;
}