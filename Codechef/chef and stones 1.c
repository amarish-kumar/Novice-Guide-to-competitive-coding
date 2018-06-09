#include<stdio.h>
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
       long long  int n,k,max,i=0;
        long long int arr[100005]={0};
        scanf("%lld%lld",&n,&k);
        while(i<n)
        {
            long long int p;
            scanf("%lld",&p);
            p=(k/p);
            if(p==0)
                arr[i]=0;
            else
                arr[i]=p;
           i++;
        }
        i=0;
        while(i<n)
        {
            long long int j;
            scanf("%lld",&j);
            arr[i]=(arr[i]*j);
            if(i==0)
            {
                max=arr[i];
            }
            if((arr[i])>=max)
                max=arr[i];
                i++;
        }
        printf("%d\n",max);
    }
    return 0;
}
