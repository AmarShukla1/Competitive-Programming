//Tonight's the night and it is going to happen again and again.
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mp make_pair
#define pb push_back
#define T ll t; cin>>t; while(t--)
#define mod 1000000007
#define f(n) for(ll i = 0;i<n;i++)
#define endl "\n"
ll gcd(ll a,ll b){if(b==0){return a;}return gcd(b,a%b);}
ll dp[1000001];
main()
{
   ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
       freopen("output.txt", "w", stdout);
      #endif 
   ll n,x;cin>>n>>x;ll inf=100000000000;
   ll a[n];f(x+1){dp[i]=inf;}
   for(ll i=0;i<n;i++){cin>>a[i];dp[a[i]]=1;}
   for(ll i=a[0];i<=x;i++)
   {
   	for(ll j=0;j<n;j++)
   	{
   		if(i>a[j])
   		{
   		dp[i]=min(dp[i],dp[i-a[j]]+1);
   		if(dp[i]!=inf){dp[i]=dp[i]%mod;}
   	    }
   		
   	}
   }
   if(dp[x]==inf){cout<<-1;}
   else{cout<<dp[x]%mod;} 
}