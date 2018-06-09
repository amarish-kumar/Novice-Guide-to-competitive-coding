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
    while(t--)
    {
        int arr[106],n,i=0,count=0,max=-1,r,g,p,q;
        scanf("%d",&n);
        scanf("%d%d",&p,&q);
        g=gcd(p,q);
        if(g==1)
           {
               count=2;
               max=count;
           }
            else
                g=q;
        while(i<(n-2))
        {
                int a;
                scanf("%d",&a);
                g=gcd(a,g);
                if(g!=1)
                {
                    g = a;
                    if(max<count)
                        max=count;// max initially b equal to -1;//
                        count = 0;
                }
                else
                    {
                       count+=1;
                    }
            i++;
        }

        if(n<2)
            printf("%d",-1);
        if(n>2 && max==0)
            printf("%d",-1);
        else
                printf("%d",max);

    }
    return 0;
}
