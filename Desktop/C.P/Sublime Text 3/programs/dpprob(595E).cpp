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
   int n,c;cin>>n>>c;
   int a[n-1];int b[n-1];int dp[n+1][2];dp[1][0]=0;dp[1][1]=c;
   f(n-1){cin>>a[i];}f(n-1){cin>>b[i];}
   for(int i=2;i<=n;i++)
   {
   	dp[i][0]=min(dp[i-1][0]+min(a[i-2],c+b[i-2]),dp[i-1][1]+b[i-2]);
    dp[i][1]=min(dp[i-1][1]+b[i-2],dp[i-1][0]+c+b[i-2]);
   }
   for(int i=1;i<=n;i++)
   {
   	cout<<min(dp[i][0],dp[i][1])<<" ";
   }
}