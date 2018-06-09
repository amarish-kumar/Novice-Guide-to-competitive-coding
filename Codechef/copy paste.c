#include<stdio.h>
#include<string.h>
#include<stdlib.h>
# define gc getchar
# define pc putchar

long int scan(){
long int n=0;
char ch;
ch=gc();
while(ch<'0' || ch >'9')
ch=gc();
while(ch>='0' && ch<='9'){
n=n*10+ch-'0';
ch=gc();
}
return n;
}

main()
{
        int t;
        long int j;
        t=scan();
        while(t--)
        {
              int n,tmp,result=0;
              int num[100001]={0};

              n=scan();
              while(n--)
              {

                	tmp=scan();//scanf("%d",&tmp);
                        if(num[tmp]==0){
                            num[tmp]=1;
                            result++;
                                    }
                }
                printf("%d",result)  ;
        }

            return 0;
    }
