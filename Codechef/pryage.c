#include<stdio.h>
int main()
{
        int i=0,r;
        long long b;
    char d[10000];
    scanf("%s",d);
    while(d[i])
    {
        r=d[i]-'0';
        b=b*10+r;
    }

    while(b--)
    {
        int j;
        long long y=0,k=0,l=0,d;
      char a[10000],b[10000];
      scanf("%s%s",a,b);
      j=0;
      while(a[j])
      {
            d=a[j]-'0';
         y=y*10+d;
          }
          j=0;
          d=0;
       while(b[j])
       {
            d=b[j]-'0';
            k=k*10+d;
        }
        l=k-y;
        if(l!=k || l!=y)
        printf("%lld",l);
    }
    return 0;
}
