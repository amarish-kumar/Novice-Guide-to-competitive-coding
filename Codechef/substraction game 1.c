#include<stdio.h>
int main()
{
        int t;
        scanf("%d",&t);
        while(t--)
        {
            int arr[10],n,i,max,min,in1,in2,j,k,s,temp;
            scanf("%d",&n);
            for(i=0;i<n;i++)
            {
                    scanf("%d",&arr[i]);
            }
            for(j=1;j<n;j++)
            {
                   temp=arr[j];
                   for(k=(j-1);(k>=0) && (arr[k]>temp);k--)
                      {
                          arr[k+1]=arr[k];
                          in2=k;
                       }
                       arr[in2]=temp;
             }
             i=0;
                    for(i=0;i<n;i++)
            {
                    printf("%d",arr[i]);
            }

        }
        return 0;
}
