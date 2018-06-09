#include<stdio.h>
int gcd(int a,int b)
{
        int temp;
        if(a<b)
        {
            temp=a;
            a=b;
            b=temp;// 7 and 2
        }
    if(a%b==0)
    {
        return b;
    }
    else
    {
        return gcd(b,a%b);
    }

}
int main()
{
    int t;
    scanf("%d",&t);
    if(t<2)
        exit(0);
    while(t--)
    {
        int n,q,arr[100],i=0;
        scanf("%d%d",&n,&q);
        while(i<n)
        {
            scanf("%d",&arr[i]);
            i++;
        }
        while(q--)
        {
            int l,r,gc,count=0;
            scanf("%d%d",&l,&r);
            l=l-1; r=r-1;
            i=0;
            while(i<n)
            {
                if(i>=l && i<=r)
                   i++;
                   else
                    {
                      if(count==0)
                        {
                            gc=arr[i];
                            count++;
                            i++;
                        }
                        else
                            {
                                  gc=gcd(arr[i],gc);
                                  i++;
                            }
                   }
            }
            printf("%d",gc);
        }
    }
        return 0;
}
