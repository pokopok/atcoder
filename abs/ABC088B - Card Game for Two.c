#include <stdio.h>

int main()
{
    int n;
    int i, j, k, tmp;
    int a[101];
    int Alice,Bob;

    scanf("%d", &n);
    for (i=0; i<=n; i++)
    {
        scanf("%d", tmp);
        j = 0;
        while(j <= i)
        {
            if(tmp > a[j])
            {
                k = i + 1;
                while(k >= j)
                {
                    a[k] = a[k-1];
                    k--;
                }
                a[j] = tmp;
            }
            if(j = i)
                a[i] = tmp;
        }
    }
    i = 0;
    while(i <= n)
    {
        Alice += a[i];
        
    }
}