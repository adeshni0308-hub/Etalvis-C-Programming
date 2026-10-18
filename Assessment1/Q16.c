#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the number: ");
    scanf ("%d", &a);
    if (a>9 && a<100)
    {
        b = a%10;
        a = a-b;
        printf("Result: %d", a);
    }
    else
    {
        printf("Invalid input. Please enter a two-digit number.");
    }
    return 0;
}