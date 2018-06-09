#include<stdio.h>
main()
{
int f;
scanf("%d",&f);
  while(f--)
  {
             int m,j=0;
            scanf("%d",&m);
             int  num[100001]={0};
            while(m--)
            {
                 int t;
               scanf("%d",&t);
               if(num[t] == 0)
               {
                        num[t]=1;
                        j++;
                }
            }
     printf("%d",j) ;
    }
   return 0;
}
