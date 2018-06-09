#include<stdio.h>
int main()
{
   int t;
   scanf("%d",&t);
   while(t--)
   {
        int n,j,c=0;
        long long int arr[100005]={0};
        scanf("%d",&n);
        j=n;
        while(n--)
        {
           long long int i;
           scanf("%llu",&i);
           arr[i]=arr[i]+1;
           if(arr[i]>(j/2))
            {
                printf("%llu",i);
                c=1;
                break;
            }
        }
        if(c==0)
        printf("NO MAJOR");
    }
    return 0;
}
