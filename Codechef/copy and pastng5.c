#include<stdio.h>
int main()
{
int f;
  scanf("%d",&f);
  while(f--)
  {
      char num[100001]={0};
      int m,count=0;
            scanf("%d",&m);
            while(m--)
            {
                int j;
                scanf("%d",&j);
            if(num[j] == 0)
                {
                    num[j]=1;
                    count++;
                }
            }
     printf("   %d\n",count) ;
    }
   return 0;
}
