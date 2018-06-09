#include<stdio.h>
int main()
{
     int t,count, max,n,i;
     scanf("%d",&t);
     while(t--)
     {
            max=0;
            n=0;
            i=0;
            char b[1000005];
            count=0;
            scanf("%s",b);
            while(b[i])
            {
                n=0;
                while(b[i]=='#')
                {
                    i++;
                }
                while(b[i]=='.')
                {
                    n++;
                    i++;
                }
                if(n>max)
                {
                    max=n;
                    count++;
                }
            }
            printf("%d",count);
    }
    return 0;
}
