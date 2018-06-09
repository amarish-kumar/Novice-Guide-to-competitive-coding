#include<stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    while(n--)
    {
      int i;
      scanf("%d",&i);
      sum+=i;
    }
    if(sum==((n*(n+1))/2))
      printf("yes\n");
      else
      printf("no");
      return 0;
}
