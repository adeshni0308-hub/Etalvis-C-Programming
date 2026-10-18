#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the number: ");
    scanf ("%d", &a);
    b = (a%2 != 0) ? a - 5 : a ;
    printf ("The result is %d", b);
    return 0;
}