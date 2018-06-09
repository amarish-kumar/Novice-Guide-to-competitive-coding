#include<stdio.h>
int bmb(int n)
{
  int  arr[506]={0},bomb=0,c[102];
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
    return bomb;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        printf("%d",bmb(n));
    }
return 0;
}
