#include<stdio.h>
#include<math.h>
int prime[10000];
int isprime[100000]={0},id;
void sieve()
{
   id=0;
   isprime[0]=1;
   isprime[1]=1;
   int i,j;
   for(i=2;i<100000;++i)
    if(!isprime[i])
    {
        prime[id++]=i;
        for(j=i+i;j<100000;j+=i)
            isprime[j]=1;
    }
}
main()
{
  int N;
  scanf("%d",&N);
  while(N--)
  {
       int n,m,i;
       scanf("%d%d",&n,&m);
        int num[100002]={0},ind=0;
        while(1)
        {
             int pnum=prime[ind],start;
             ind++;
             if(pnum >sqrt(m))
             break;
             start=(pnum - n%pnum);
             start=start%pnum;
             for(i=start;i<m-n+1;i+=pnum)
             {
                  if(pnum!=i+n)
                     num[i]=1;
            }
        }
            for(i=0;i<=m-n;i++)
            {
                 if(num[i]==0 && i+n!=1)
                    printf("%d\n",i+n);
            }
            if(N!=0)
              printf("\n");

        }
        return 0;
}
