#include<stdio.h>
int main()
{
   int t,j,s;
   s=33102;
   j=103993/s;
   scanf("%d",&t);
   while(t--)
   {
       int k,p,q;
        scanf("%d",&k);
         if(k==0)
         printf("%d",j);
         else
         {
             printf("%d.",j);
             p=103993%s;
             while(k-- >0)
             {
                q=((p*10)/s);
                printf("%d",q);
                p=((p*10)%s);
             }
         }
         printf("\n");
    }
      return 0;
    }
