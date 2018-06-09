#include<stdio.h>
#include<math.h>
void prime(int n)
{
   int i,j,count=0;
    j=n;

   if (n%2==0 || n==1)
   {
       if(n==2)
        count=0;
       else
       count++;
    }
    for(i=3;i<=sqrt(n);i=i+2)
    {
       if(n%i==0)
       {
                count++;
        }
    }
    if(count==0)
       printf ("prime number");
       else
        printf("not a prime");
        }
main()
{
  int k=315;
  prime(4);
  return 0;
}
