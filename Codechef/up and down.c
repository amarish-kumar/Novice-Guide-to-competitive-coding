#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i=0,b;
        scanf("%d",&n);
        while(i<n)
        {
            int a,temp;
            scanf("%d",&a);
            if(i==0)
            b=a;
            else
            {
                if(i%2!=0)
                   {
                      if(b>a)
                      {
                        temp=a;
                        a=b;
                        b=temp;
                       }
                       b=a;
                    }
                else
                {
                 if(a>b)
                 {
                     temp=a;
                        a=b;
                        b=temp;
                  }
                    b=a;
                }
            }
            printf("%d%d\n",a,b);
            i++;
            }
        }
        return 0;
    }
