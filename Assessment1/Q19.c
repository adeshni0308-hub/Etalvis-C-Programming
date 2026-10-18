#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("Enter the number: ");
    scanf ("%d", &a);
    d = a;
    a = a%100;
    a = a/10;
    b = (a%2 != 0) ? d - 5 : d ;
    printf ("The result is %d", b);
    return 0;
}