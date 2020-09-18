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
   ll n;cin>>n;ll a[n],b[n];
   f(n){cin>>a[i];}
   f(n){cin>>b[i];}
   ll dp[n][2];mem(dp,0);dp[0][0]=a[0];
   dp[0][1]=b[0];
   for(ll i=1;i<n;i++)
   {
     if(i==1)
     	{
     		dp[i][0]=max(max(dp[0][0],a[1]),dp[0][1]+a[1]);
     		dp[i][1]=max(max(dp[0][1],b[1]),dp[0][0]+b[1]);
        }
        else
        {
          dp[i][0]=max(a[i]+max(dp[i-1][1],dp[i-2][0]),dp[i-1][0]);
          dp[i][1]=max(b[i]+max(dp[i-1][0],dp[i-2][1]),dp[i-1][1]);
        }
   }
   ll max1=0;
   for(ll i=0;i<n;i++)
   {
   	for(ll j=0;j<2;j++)
   	{
   	max1=max(max1,dp[i][j]);}
   }
   cout<<max1;
}
