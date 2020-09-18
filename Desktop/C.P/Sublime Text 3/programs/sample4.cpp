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
   T
   {
    int n,k;cin>>n>>k;int a[n];
    f(n){cin>>a[i];}int c;
    int dp[n];dp[0]=k;int w=0;
    for(int i=1;i<n;i++)
    {
      c=0;
      for(int j=i-1;j>=w;j--)
      {
        if(a[j]==a[i]){c++;}
      }
      if(c>0){c++;}
      dp[i]=min(dp[w]+c,dp[i-1]+k);
      if(dp[i-1]+k<dp[i-1]+c){w=i;}
      cout<<dp[i]<<endl;
    }
   cout<<dp[n-1]<<endl; 
}
}