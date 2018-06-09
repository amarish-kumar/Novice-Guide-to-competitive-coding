#include<stdio.h>
#include<math.h>
#include <string.h>
#define dis(x1,x2,y1,y2) pow(abs(x1-x2),2)+pow(abs(x1-x2),2)
main()
{
        unsigned int n,k,count=0;
        scanf("%u",&n);
        while(n--)
            {

               unsigned int x,y,z;
               char num[14];
               gets(num);
                x=dis(num[0],num[4],num[2],num[6]);
                y=dis(num[4],num[8],num[6],num[10]);
                z=dis(num[0],num[8],num[2],num[10]);
                if(z==x+y || x==y+z || y==z+x)
                    count ++;
            }
            printf("%u",count);
            return 0;
        }
