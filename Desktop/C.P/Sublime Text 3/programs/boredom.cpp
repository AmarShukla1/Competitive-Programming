//Tonight's the night and it is going to happen again and again.
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mp make_pair
#define pb push_back
#define T ll t; cin>>t; while(t--)
#define mod 1000000007
#define mem(name,val) memset(name,val,sizeof(name))
#define f(n) for(ll i = 0;i<n;i++)
#define rep(i,a,n) for(ll i=a;i<n;i++)
#define endl "\n"
ll gcd(ll a,ll b){if(b==0){return a;}return gcd(b,a%b);}
int main()
{
   ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
   #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
   #endif
    ll n;cin>>n;ll a[n];ll dp[n];mem(dp,0);
    map<ll,ll>m;vector<ll>v;
    f(n){cin>>a[i];m[a[i]]++;}
    for(auto t:m)
    {
    	
    	v.pb(t.first);
    }
    sort(v.begin(),v.end());ll max1=0;
    for(ll i=0;i<v.size();i++)
    {
    	
    	if(i==0){dp[i]=v[i]*m[v[i]];}
    	else if(i==1){if(v[i]-v[i-1]!=1){dp[i]=dp[i-1]+v[i]*m[v[i]];}else{dp[i]=max(dp[0],v[1]*m[v[i]]);}}
    	else
    	{
    		if(v[i]-v[i-1]!=1){dp[i]=max(dp[i-1]+v[i]*m[v[i]],dp[i-2]+v[i]*m[v[i]]);}
    		else{dp[i]=max(dp[i-1],dp[i-2]+v[i]*m[v[i]]);}
    	}
    	max1=max(max1,dp[i]);	
    }
    //for(ll i=0;i<n;i++){cout<<dp[i]<<" ";}
    cout<<max1;
}