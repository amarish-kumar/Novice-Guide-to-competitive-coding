#include <stdio.h>
	int gcd(int a,int b)
	{
	    int temp,p;
	    if(a==0 || b==0)
	    return 0;
	    while(b)
	    {
	       int r=b;
	       b=a%b;
	       a=r;
	    }
	    temp=a;
	    return temp;
	}
	int main(void)
	{
	    int t;
	    int a[100001]={0};
	    scanf("%d",&t);
	    while(t--)
	    {
	        int n,i,gc;
	        scanf("%d",&n);
	        for(i=0;i<n;i++)
	        {
	            scanf("%d",&a[i]);
	        }
	        gc=a[0];
	        for(i=1;i<n;i++)
	        {
	            gc=gcd(a[i],gc);
	            if(gc==1)
	            break;
	        }
	        if(gc==1)
	        printf("%d\n",n);
	        else
	        printf("%d\n",-1);
	    }
	    return 0;
	}


