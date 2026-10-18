#include <stdio.h>
int main()
{
    int a, b, c, d, rev=0, e;
    printf("Enter the number: ");
    scanf ("%d", &a);
    if (a>999 && a<10000)
    {
        c=a%100;
        d=c;
        for (b=0; c>0; b++)
        {
            rev = c%10 + rev*10;
            c = c/10;
        }
        e = (a-d)+rev;
        printf("Reversed number: %d", e);
    }
    else
    {
        printf("Invalid input. Please enter a four-digit number.");
    }
    return 0;
}