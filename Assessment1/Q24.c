#include <stdio.h>
int main()
{
    int a,b,c,d,rev=0;
    printf("Enter a four-digit number: ");
    scanf ("%d", &a);
    if (a>999 && a<10000)
    {
        b=a%100;
        a=a/100;
        for(int c=0;c<2;c++)
            {
                d=a%10;
                rev = rev*10 +d;
                a=a/10;
            }
        c=rev*100 + b;
        printf("The result is : %d", c);
    }
    else
    {
        printf ("Enter a valid input.");
    }
    return 0;
}