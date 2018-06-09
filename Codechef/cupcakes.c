#include<stdio.h>
long int c=2;
void factors(long int n )
{

        if(n/c==1)
        {
            printf("%ld",c);
           return ;
        }
         else  if (n%c==0)
           {
               printf("%ld ",c);
               factors(n/c);
           }
            else
              c++;
    }
 main()
 {
        long int p;
        scanf("%ld",&p);
        factors(p);

        }
