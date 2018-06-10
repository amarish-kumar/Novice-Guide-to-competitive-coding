#include<bits/stdc++.h>
using namespace std;
struct point
{
	int x,y;
};
int main()
{
	int t,n,i,j,m,l,r;
    cin>>t;
    while(t--)
    {
          cin>>n>>m;
          string str;
          cin>>str;
          char c1,c2;
          while(m--)
          {
          		cin>>l>>r>>c1>>c2;
          		for(i=l-1;i<r;i++)
          		{
          		    if(str[i]==c1)
          		       str[i]=c2;
          		}
          }
          cout<<str<<"\n";
    }
}