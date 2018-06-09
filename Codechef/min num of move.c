#include<stdio.h>
#include<stdlib.h>

int main()
{
	int p,n,min,i,count;
	int* weight;
	scanf("%d",&p);
	while(p--)
	{
		scanf("%d",&n);
		weight=(int*)malloc(n*sizeof(int));
		count=0;
		scanf("%d",&weight[0]);
		min=weight[0];
		for(i=1;i<n;++i)
		{
			scanf("%d",&weight[i]);
			if(weight[i]<min)min=weight[i];
		}
		for(i=0;i<n;++i)
		{
			count+=(weight[i]-min);
		}
		printf("%d\n",count);
		free(weight);
	}
	return 0;
}

