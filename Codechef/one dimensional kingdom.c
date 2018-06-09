#include<stdio.h>
int main()
{
        int t;
        scanf("%d",&t);
        while(t--)
        {
          int n,bomb=0;
          int arr[2000]={0};
          scanf("%d",&n);
          while(n--)
          {
               int a,b;
               scanf("%d%d",&a,&b);
               while(a<=b)
               {
                   if(arr[a]==1)
                    break;
                    else

                       arr[a]=1;
                   a++;
               }
               if(a>b)
                bomb+=1;
          }
            printf("%d",bomb);
        }
        return 0;
    }
