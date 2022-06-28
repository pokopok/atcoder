#include <stdio.h>

int main()
{
    int a[201];
    int n, i, odd, min, count;

    odd = 0;
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
        if(a[i]%2==1)
            odd++;
    }
    if(odd == 0)
    {
        min = 100;
        for(i=0; i<n; i++)
        {
            count = 0;
            while(1)
            {
                if(a[i]%2==0)
                {
                    a[i] = a[i]/2;
                    count++;
                }
                else
                {
                    if(min>count)
                        min = count;
                    break;
                }       
            }
        }
        printf("%d", min);
    }
    else
        printf("0");
    return(0);
}

// 他の人の回答
// int main(void){
//   int blackboard[256];
//   int num,i;
//   int odds=0;
//   int half=0;
//   scanf("%d",&num);
//   for(i=0;i<num;i++){
//     scanf("%d",&blackboard[i]);
//     odds+=blackboard[i]%2;
//   }
//   while(odds==0){
//     half++;
//     for(i=0;i<num;i++){
//       blackboard[i]/=2;
//       odds+=blackboard[i]%2;
//     }
//   }
//   printf("%d\n",half);
//   return 0;
// }