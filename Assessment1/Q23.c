#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter a three-digit number: ");
    scanf ("%d", &a);
    if (a>99 && a<1000)
    {
        b=a%100;
        int c=(b/10)*10;
        a=a-c;
        printf("The result is : %d", a);
    }
    else
    {
        printf ("Enter a valid input.");
    }
    return 0;
}