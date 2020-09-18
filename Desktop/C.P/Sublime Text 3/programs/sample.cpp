//Tonight's the night and it is going to happen again and again.
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mp make_pair
#define pb push_back
#define T ll t; cin>>t; while(t--)
#define mod 1000000007
#define mem(name,val) memset(name,val,sizeof(name))
#define f(n,a) for(ll i = a;i<n;i++)
#define endl "\n"
int dp[201][201][201];
int p[202],q[202],t[202];
ll gcd(ll a,ll b){if(b==0){return a;}return gcd(b,a%b);}
int main()
{
   ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
   #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
   #endif
   int r,g,b;int ans=-1;
   cin>>r>>g>>b;
   f(r+1,1){cin>>p[i];}
   f(g+1,1){cin>>q[i];}
   f(b+1,1){cin>>t[i];}
   sort(p,p+r+1,greater<int>());sort(q,q+g+1,greater<int>());sort(t,t+b+1,greater<int>());
   for(int i=1;i<=r;i++)
   {
   	for(int j=1;j<=g;j++)
   	{
   		for(int k=1;k<=b;k++)
   		{
   			dp[i][j][k]=max(dp[i-1][j-1][k]+p[i-1]*q[j-1],max(dp[i][j-1][k-1]+q[j-1]*t[k-1],dp[i-1][j][k-1]+p[i-1]*t[k-1]));
   			ans=max(ans,dp[i][j][k]);

   		}
   		
   	}
   }
   cout<<ans;
}