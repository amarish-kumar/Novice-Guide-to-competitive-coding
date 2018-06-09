
    #include <stdio.h>
    #include <math.h>
    int main()
    { int a,k,i,t;
    scanf("%d",&t);
    while(t--)
    {
    scanf("%d",&a);
    for( i=(int)sqrt(a) ;i>0;i--)
    {
    if(a%i==0)
    {
    k=i;
    break;
    }
    }
    printf("%d \n",a/k-k);
    }
    return 0;
    }
