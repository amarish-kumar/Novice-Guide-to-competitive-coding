#include <stdio.h>
int main()
{
	long long p;
	scanf("%lld",&p);
	if(p==0 || p==1 || p==3 || (p%6==0) ||(((p-1)%6)==0) || (((p-3)%6)==0))
	printf("yes");

	else printf("no");
    return 0;
}
