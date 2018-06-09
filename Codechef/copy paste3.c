#include<stdio.h>
#include<string.h>
#include<stdlib.h>
# define gc getchar
# define pc putchar



main()
{
        int t;
        long int j;
        scanf("%d",t);
        while(t--)
        {
              int n,tmp,result=0;
              int num[100001]={0};

              scanf("%d",&n);
              while(n--)
              {

                	scanf("%d",&tmp);
                        if(num[tmp]==0){
                            num[tmp]=1;
                            result++;
                                    }
                }
                printf("%d",result)  ;
        }

            return 0;
    }
