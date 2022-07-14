//未判定

#include <stdio.h>

int main()
{
    int n, m;
    int x, y, z;

    scanf("%d %d", &n, &m);
    x = 0;
    while (10000*x <= m && x <= n)
    {
        y = 0;
        while (10000*x + 5000*y <= m && x + y <= n)
        {
            z = n - x - y;
            if (10000*x + 5000*y + 1000*z == m)
            {
                printf("%d %d %d", x, y, z);
                return (0);
            }
            y++;
        }
        x++;
    }
    printf("-1 -1 -1");
    return (0);
}