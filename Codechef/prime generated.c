#include<stdio.h>
#include<math.h>
 int prime[500000]={0};
 int c=0;
void cal(void)
{
  long long int i=1,p,count,j;
    while(i<=1000000)
    {
        p=i;
        j=3;
        count = 0;
       if (p%2==0 || p==1)
         {
             if(p==2)
                count=0;
             else
                count++;
         }
        while(j<=sqrt(p))
       {
       if(p%j==0)
            {
                count++;
             }
        j=j+2;
       }
    if(count==0)
    {
        prime[c]=i;
        c++;
    }
            i++;
    }
}
int main()
{
      int t;
      cal();
      scanf("%d",&t);
      while(t--)
     {
        long int a,b,f=0;
      scanf("%ld%ld",&a,&b);
       while(f<c)
       {
           if(a<=prime[f] && b>=prime[f])
            printf("%d\n",prime[f]);
            if(prime[f]>b)
                break;
           f++;
       }
       printf("\n");
    }
  return 0;
}
