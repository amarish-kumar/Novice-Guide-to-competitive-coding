#include<stdio.h>
#include<math.h>

int main()
{
   int t;
   char c[32001];
    long int n=1,p=0;
    while(n<=32000)
  {
        int i=3,count=0;
   while (n%2==0 || n==1)
   {
        if(n==2)
        count = 0;
        else
        count++;
    }
    while(i<=sqrt(n))
    {
       while(n%i==0)
       {
            count++;
        }
        i=i+2;
    }
    if(count == 0)
      c[p++]=n;
        n++;
    }
   scanf("%d",&t);
   while(t--)
   {
         long int b,f;
         scanf("%ld%ld",&f,&b);
         while(f<=b)
                {
                        int i,co=0;
                       for(i=0;c[i]<=sqrt(f);i++)
                       {
                            if(f%c[i]==0)
                            {
                               co++;
                               break;
                            }
                        }
                           if(co==0)
                                printf("%ld",f);
                                f++;
                }
    }
    return 0;
   }
