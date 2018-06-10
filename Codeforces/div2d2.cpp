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
	ll a1,a2,h1,h2,c1,i,j,k,sum=0;
   string str[100000];
      cin>>h1>>a1>>c1;
      cin>>h2>>a2;
      while(h2-a2>=0)
      {
         if(h1-a1>0)
            {
               str[i]="STRIKE";
               h2=h2-a2;
               h1=h1-a1;
            }
         else
            {
               h1=h1+c1;
               str[i]="HEAL";
            }
            i++;
      }
		cout<<i<<"\n";
      for(j=0;j<i;j++)
         cout<<str[j]<<"\n";
	return 0;
}