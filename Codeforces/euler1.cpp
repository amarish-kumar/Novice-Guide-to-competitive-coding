#include<bits/stdc++.h>
#include<map>
using namespace std;


int main()
{
	long long int t,n,i,sum;
	cin>>t;
	while(t--)
	{
		cin>>n;
		sum=0;
		for(i=1;i<n;i++)
		{
			if(i%3==0 || i%5==0)
				sum=sum+i;
		}
		cout<<sum<<"\n";
	}
}