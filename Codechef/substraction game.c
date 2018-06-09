#include<stdio.h>
main()
{
        int t;
        scanf("%d",&t);
        while(t--)
        {
                int n,i,j,f;
               long long b[1000],mi,max;
                scanf("%d",&n);
                for(i=0;i<n;i++)
                {
                        scanf("%lld",b[i]);
                        if(i==0)
                        {
                            mi=b[i];
                            max=b[i];
                            }
                        if(b[i]<=mi)
                        {
                            mi=b[i];
                            j=i;
                        }
                        if(b[i]>=max)
                        {
                                max=b[i];
                                f=i;
                        }
                }
        }
}
