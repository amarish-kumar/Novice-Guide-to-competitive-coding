#include<stdio.h>
long long int n[1000];
int c=0;
void check(void)
{
    long long int j,k,p,i=1;
    while(i<=100000)
{
        k=i;
        p=i*i;
    while(p!=0)
    {
        j=p%10;
        if((j==0 || j==1 || j==4 || j==9))
            p=p/10;
            else
                break;
    }

    if(p==0)
       {
          n[c]=(k*k);
          c++;
       }
       i++;
}
}
int main()
{
      long long t,ans;
      scanf("%lld",&t);
      check();
        while(t--)
        {
            long long int a,b,i;
            ans=0;
           scanf("%lld%lld",&a,&b);
                     for(i=0;(i<c);i++)
                     {
                         if(a<=n[i] && n[i]<=b)
                           ans++;
                     }
                 printf("%lld\n",ans);
        }
        return 0;
}
