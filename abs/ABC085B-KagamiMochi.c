#include <stdio.h>

int main()
{
    int n, m;
    int d[101];
    int i, j;
    int tmp;

    scanf("%d", &n);
    m = n;
    i = 0;
    while(i < n)
    {
        scanf("%d", &tmp);
        j = 0;
        while (j < i)
        {
            if (tmp == d[j])
            {
                m--;
                break;
            }
            j++;
        }
        d[i] = tmp;
        i++;
    }
    printf("%d", m);
    return(0);
}