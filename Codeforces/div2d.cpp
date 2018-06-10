#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
typedef vector < long long > vll;
typedef pair < long long, long long > pll;
typedef pair < int, int > pii;
typedef vector < int > vi;
typedef vector<vi> vvi; 
typedef vector<pii> vpii;
#define rep(i,n) for(int i = 0; i < n; i++)
#define reps(i,a,n) for(int i = a; i < n; i++)
#define traverse(container, it) \
      for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)
#define csl ios_base::sync_with_stdio(false); cin.tie(NULL)
#define all(x) x.begin(),x.end()
#define MOD 1000000007
#define SIZE 5009

int main()
{
	ll t,n,arr[100000],j,ans,k;
		cin>>n;
		rep(i,n)
		{
			cin>>arr[i];
		}
		ans=0;
         for(j=0;j<n;j++)
         {
         	for(k=j+1;k<n;k++)
         	{
         			if(abs(arr[j]-arr[k])>1)
         				ans=ans+(arr[k]-arr[j]);
         	}
         }
         cout<<ans;
	return 0;
}