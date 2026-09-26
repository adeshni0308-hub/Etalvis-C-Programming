#include <stdio.h>
int main ()
{
    int a,b;
    printf ("Enter the number: ");
    scanf ("%d", &a);
    b=a/10;
    if (a>99&&a<1000)
    {
        printf ("The result is %d", b%10);
    }
    else
    {
        printf ("The number is not a three-digit number");
    }
    return 0;
}