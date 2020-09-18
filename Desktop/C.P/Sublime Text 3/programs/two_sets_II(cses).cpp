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
#define endl "\n"
ll gcd(ll a,ll b){if(b==0){return a;}return gcd(b,a%b);}
int main()
{
   ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("output.txt", "w", stdout);
    #endif 
    ll n;cin>>n;int t=(n*(n+1))/2;if(t&1){cout<<0;exit(0);}
    ll dp[t/2+1];mem(dp,0);dp[0]=1;
    for(ll i=1;i<=n-1;i++)//here n-1 is done so that n is always in 2nd set and we 
    	//dont count doubly
    	//i tried to combat that by doing division by 2 but thats thwe wrong mwthod
    {
    	for(ll j=t/2;j>=i;j--)
    	{
    		dp[j]+=dp[j-i];if(dp[j]>=mod){dp[j]-=mod;}
    	}
    }
    cout<<(dp[t/2]%mod);
}