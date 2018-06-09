#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
   {
       long long p,b,ans=0;
       scanf("%lld%lld",&p,&b);
       while(p<=b)
       {
           long long int sum=0,j;
           char arr[100005];
           gets(arr);
           for(j=0;arr[j]>=48;j++)

           sum=sum%10;
           ans=ans+sum;
           p++;
       }
       printf("%lld",ans);
   }
   return 0;
}
