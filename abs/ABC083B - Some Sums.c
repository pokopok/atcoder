#include <stdio.h>

int main()
{
    int n,a,b;
    int sum, count;
    int l,m,i;

    scanf("%d %d %d", &n, &a, &b);
    count = 0;
    l = 1;
    while(l <= n)
    {
        m = l;
        sum = 0;
        while (m > 0)
        {
            sum = sum + m%10;
            m = m/10;
        }
        if(a <= sum && sum <= b)
            count += l;
      	l++;
    }
    printf("%d", count);
    return(0);
}