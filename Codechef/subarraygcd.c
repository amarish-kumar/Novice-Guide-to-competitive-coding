#include<stdio.h>
int gcd(int a,int b)
{

}
int main()
{
   int t;
   scanf("%d",&t);
   while(t--)
   {
       int n,j,count=0,max=0,a;
       int arr[100005];
       scanf("%d",&n);
       j=n;
       while(n--)
       {
           int p;
           scanf("%d",&p);
            if(n==(j-1))
            a=p;
            else
            a=gcd(p,a);
            count++;
            if(a!=1)
            {
                if(count > max)
                    max=count;
                count=0;
            }
            printf("%d",count);
        }
    }
    return 0;
}
