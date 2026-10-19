#include <stdio.h>
int main ()
{
    int a;
    printf ("Enter the number: ");
    scanf ("%d", &a);
    if (a>99||a<10)
    {
        printf ("The number is not a two-digit number");
    }
    else
    {
        printf ("The result is %d", a%10);
    }
    return 0;
}