//Tonight's the night and it is going to happen again and again.
//we could essentially find the element with 0 indegree and then traverse from there.
#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
#define mp make_pair
#define pb push_back
#define T ll t; cin>>t; while(t--)
#define mod 1000000007
#define f(n) for(ll i = 0;i<n;i++)
ll gcd(ll a,ll b){if(b==0){return a;}return gcd(b,a%b);}
map<ll,vector<ll> >m1;map<ll,ll>m;vector<ll>v;
void dfs(ll s)
{
	m[s]=1;
	for(auto x:m1[s])
	{
		if(m[x]==2)
		{
		dfs(x);
	    }
	}
}
void dfs1(ll s){
m[s]=1;
for(auto x:m1[s])
{
	if(m[x]==2){dfs1(x);}
}
v.pb(s);
}
int main()
{
   ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
   #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
   #endif 
   ll n;cin>>n;ll a[n];
   f(n){cin>>a[i];m[a[i]]=2;}
   for(ll i=0;i<n;i++)
   {
     if(m[a[i]*2]==2){m1[a[i]].pb(a[i]*2);}
     if(a[i]%3==0)
     {
     	if(m[a[i]/3]==2){m1[a[i]].pb(a[i]/3);}
     }
   }ll start=a[n-1],c;
   for(ll i=0;i<n;i++)
   {
   	c=0;
   	dfs(a[i]);//cout<<endl;
   	for(ll i=0;i<n;i++)
   	{

   		if(m[a[i]]==2)
   		{
   			c=1;break;
   		}
   	}
   	for(ll i=0;i<n;i++){m[a[i]]=2;}
   	if(c==0){start=a[i];break;}
   }
dfs1(start);
reverse(v.begin(),v.end());
for(auto t:v){cout<<t<<" ";}
}