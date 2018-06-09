#include<stdio.h>
main()
{
  int q;
  int j;
  scanf("%d",&q);
  while(q--)
  {
            long unsigned u,i=0,n;
                int min;
            scanf("%lu",&u);
            n=u;
            while(i<=n)
            {
                    i++;
                    if(u%i==0)
                    {
                        if(n/i > i)
                        j=(n/i)-i;
                        else
                            j=i-(n/i);
                        if(i==1)
                        min=j;
                        else
                        {
                            if(min>j)
                                min=j;
                        }
                    }

            }
            printf("%lu",min);

    }
    return 0;
}
