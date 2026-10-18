#include <stdio.h>
int main()
{
    int a, b, c = 0, d;
    printf("Enter a two-digit number: ");
    scanf ("%d", &a);
    d = a;
    a = a%10;
    c = a + c;
    c = c*10 + a%10;
    b = (c%2 != 0) ? d - 5 : d ;
    printf ("The result is %d", b);
    return 0;
}