#include<stdio.h>
long long arr[300];
long long check(long long a)
{
        long long s,d,f,g,h;
        while(a)
        {
                    s=a%10;
                    if(s!=1 && s!=4 && s!=9 && s!=0 )
                    return 0;//function terminates here
                    a=a/10;
        }
        return 1;
}
int main()
{
   long long a,s,d,f,g,h,j,i,l,k;
   k=0;
   for(a=1;a<=100000;a++)
   {
                s=a*a;
                if(check(s))
                {
                        arr[k]=s;
                        k++;
                }
    }
    scanf("%lld",&a);
    while(a--)
    {
                scanf("%lld%lld",&s,&d);
                l=0;
                for(j=0;j<k;j++)
                {
                        if(arr[j]>=s && arr[j]<=d)
                        l++;
                }
                printf("%lld\n",l);
    }
    return 0;
}
