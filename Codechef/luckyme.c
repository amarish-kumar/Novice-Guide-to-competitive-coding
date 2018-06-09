#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int i,count=0;
    char c[100005];
    fflush(stdin);
    gets(c);
    for(i=0;c[i]>=48;i++)
    {
        if(c[i]==52 || c[i]==55)
            count++;
    }
        printf("%d\n",(i-count));
    }
        return 0;
}
