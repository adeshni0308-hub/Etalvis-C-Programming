#include <stdio.h>
int main()
{
    int a, b, rev=0;
    printf("Enter the number: ");
    scanf ("%d", &a);
    if (a>99 && a<1000)
    {
        for (b=0; a>0; b++)
        {
            rev = a%10 + rev*10;
            a = a/10;
        }
        printf("Reversed number: %d", rev);
    }
    else
    {
        printf("Invalid input. Please enter a two-digit number.");
    }
    return 0;
}