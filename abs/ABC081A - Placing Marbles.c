#include <stdio.h>

int main()
{
    int i, count;
    char s[4];

    scanf("%s", s);

    i = 0;
    count = 0;
    while(i<3)
    {
        if (s[i]=='1')
            count++;
        i++;
    }
    printf("%d",count);
}