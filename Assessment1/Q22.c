#include <stdio.h>
int main()
{
    int a, b, c = 0, sum=0, d, e=0;
    printf("Enter a three-digit number: ");
    scanf ("%d", &a);
    if (a>99 && a<1000)
    {
        for (b=0;b<3;b++)
            {
                c = c + a%10;
                a = a/10;
            }
        if (c<10)
        {
            printf ("The result is : %d", c);
        }
        else
        {
            for (b=0;b<2;b++)
                {
                    sum = sum + c%10;
                    c = c/10;
                }
            if (sum<10)
            {
                printf("The result is : %d", sum);
            }
            else
            {
                for (b=0;b<2;b++)
                    {
                        e = e + sum%10;
                        sum = sum/10;
                    }
                printf ("The result is : %d", e);
            }
        }
    }
    else 
    {
        printf ("Enter a valid input.");
    }
    return 0;
}