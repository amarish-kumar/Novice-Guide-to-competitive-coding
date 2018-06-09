#include<stdio.h>
void minsize(long int *p,long int size)
{
        int s,current,pr;
        for(s=1;s<size;s++)
            {
                current=*(p+s);
                for(pr=(s-1);pr>=0;pr--)
                {
                        if(current == *(p+pr))
                        {
                                printf("%d",s);
                                return;
                        }
                        if(s==(size-1) && pr==0)
                        {
                            printf("%d",size);
                        }
                }


            }


}
main()
{
        int q;
        long int j;
        scanf("%d",&q);
        while(q--)
        {
             long int n;
             long int *arr;
              scanf("%ld\n",&n);
              arr=(int *)calloc(n,sizeof(int));
              for(j=0;j<n;j++)
              scanf("%ld",arr+j);
                    minsize(arr,n);
                    }
            return 0;
    }
