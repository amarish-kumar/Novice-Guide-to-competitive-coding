#include<stdio.h>
#include<string.h>
int main()
{
   int t;
   scanf("%d",&t);
   while(t--)
   {
        int n,i=0,s=0,p,q;
       scanf("%d",&n);
       p=100/n;
       while(i<n)
       {
           int a;
           scanf("%d",&a);
           s=s+a;
           i++;
        }
        if(s==100)
           printf("%s","yes");
        if(s>100)
         {
             q=s-100;
             if(q<=(n/2))
                printf("%s","yes");
             else
                printf("%s","no");
         }
         if(s<100)
         {
             q=100-s;
             if(q<=n)
                printf("%s","yes");
             else
                printf("%s","no");
         }

    }
    return 0;
    }
