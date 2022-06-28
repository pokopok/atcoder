#include <stdio.h>

int main()
{
    int a,b,c,x;
    int count = 0;
    int i,j,k;

    scanf("%d\n%d\n%d\n%d", &a, &b, &c,&x);
    for(i=0; i<=a; i++)
    {
        for(j=0; j<=b && 500*i+100*j<=x; j++)
        {
            for(k=0; k<=c; k++)
            {
                if(500*i + 100*j + 50*k > x)
                    break;
                else if(500*i + 100*j + 50*k == x)
                    count++;
            }
        }
    }
    printf("%d", count);
    return (0);
}