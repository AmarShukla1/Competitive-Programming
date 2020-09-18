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
   int n;cin>>n;int dp[n+2];f(n+2){dp[i]=1000000;}
   for(int i=1;i*i<=n;i++)
   {
   	dp[i*i]=1;
   }
   for(int i=2;i<=n;i++)
   {
   	for(int j=1;j*j<=i;j++)
   	{
   		dp[i]=min(dp[i],dp[i-j*j]+dp[j*j]);
   	}
   }
   cout<<dp[n]; 
}