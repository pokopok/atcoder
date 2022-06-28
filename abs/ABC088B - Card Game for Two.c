#include <stdio.h>

int main()
{
    int n;
    int i, j, k, tmp;
    int a[101];
    int Alice,Bob;

    scanf("%d", &n);
    for (i=0; i<n; i++)
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
            j++;
        }
    }
    i = 0;
    Alice = 0;
    Bob = 0;
    while(i <= n)
    {
        Alice += a[i];
        if(i < n)
            Bob += a[i+1];
        i = i + 2;
    }
    printf("%d", Alice - Bob);
}