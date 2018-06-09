#include<stdio.h>
main()
{
    int n,p=0,max=0,i=1;
    scanf("%d",&n);
    while(i<=n)
    {
         int a;
         scanf("%d",&a);
         if(a!=0)
           {
                p++;
            }
         if(a==0)
            {
                  if(p>max)
                  {
                      max=p;
                  p=0;
                  }
            }
    }
    if(p>max && i<1)
        max=p;
    printf("%d",max);
    return 0;
    }
