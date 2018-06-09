#include<iostream>
using namespace std;
int main()
{
        int t;

        cin>>t;
        while(t--)
        {
             long int f,j,p;
    cin>>f>>j;
    p=f;
    while(p<=j )//CHECKS NUMBERS BETWEEN P AND J FOR PRIME FACT//
{
    long int i,c=0;
    i=p-1;
    if(p==2)//IF PIS 1 OR 2 MAKE IT A PRIME NUMBER//
        c=0;
    else if(p%2==0 || p==1)
    {
        c=1;
    }
    else if(p>5 && (p%10==5))
    {
        c=1;
    }
   else
   {
      if(i>1){
    while( i>1)
     {
        if(p%i==0)
           {
            c++;
            break;
            }
            i--;
      }
          }
if(c==0 )
cout<<p;
    }

p++;
}
}
return 0;
}

