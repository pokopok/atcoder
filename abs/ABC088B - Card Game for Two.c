// 未完成
// 大きい順への並べ替えがうまくいっていない

#include <stdio.h>

int main()
{
    int n;
    int i, j, k, tmp;
    int a[101];
    int Alice,Bob;

    for(i=0; i<n; i++)
    {
        a[i] = 0;
    }

    scanf("%d", &n);
    for (i=0; i<n; i++)
    {
        scanf("%d", &tmp);
        j = 0;
        while(j <= i)
        {
            if(tmp > a[j])
            {
                k = i;
                while(k >= j && a[k] > 0)
                {
                    a[k + 1] = a[k];
                    k--;
                }
                a[j] = tmp;
                printf("%d", j);
                break;
            }
            j++;
        }
    }

    i = 0;
    while(i < n)
    {
        printf("%d\n", a[i]);
        i++;
    }
    i = 0;
    Alice = 0;
    Bob = 0;
    while(i < n)
    {
        Alice += a[i];
        i++;
        if(i < n)
            Bob += a[i];
        i++;
    }
    printf("%d", Alice - Bob);
}