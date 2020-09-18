//Tonight's the night and it is going to happen again and again.
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mp make_pair
#define pb push_back
#define endl "\n"
ll b1,c1,l,m,r;
bool check(ll n,ll i)
{
	b1=l;
	c1=n*i-m+b1;
	if(c1>=l&&c1<=r){return 1;}
	return 0;
}
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
   #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
   #endif
 ll t,a,b,c;cin>>t;
 while(t--)
 {
 	cin>>l>>r>>m;
 	for(ll i=l;i<=r;i++)
 	{
 		ll hi=m-l+r;
 		ll a=hi/i;
 		if(a>0){
 		bool a1=check(a,i);
 		if(a1){cout<<i<<" "<<b1<<" "<<c1<<endl;break;}}
 	}
 }   
}