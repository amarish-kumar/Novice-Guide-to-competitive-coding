#include<stdio.h>
main()
{
 int t;
 scanf("%d",&t);
 while(t--)
 {
        int n,i=1,k;
        scanf("%d",&n);
        k=n;
        while(k>0)
        {
            k=k/i;
                printf("%d %d \n",k,i);
                i++;
        }

}
}
