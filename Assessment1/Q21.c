#include <stdio.h>
int main()
{
    int a, b, c = 0, d;
    printf("Enter a three-digit number: ");
    scanf ("%d", &a);
    d = a;
    a = a%10;
    c = d/100;
    c = c%10;
    b = (c%2 != 0 && a%2 != 0) ? d - 5 : d ;
    printf ("The result is %d", b);
    return 0;
}