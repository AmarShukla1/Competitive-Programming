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
    int n;
   cin>>n;int a[n];int ma=1;
   f(n){cin>>a[i];}int dp2[n];
   int dp[n];f(n){dp[i]=1;dp2[i]=1;}
   int max1=1;
   for(int i=0;i<n;i++)
   {
   	for(int j=0;j<i;j++)
   	{
   		if(a[i]>a[j])
   		{	
   		dp[i]=max(dp[i],dp[j]+1);
   	  }
   	}
   }
   //calculating from back if we calculate from back and say a[i]>a[j] we are just calculating longest
   //decreasing subsequence which is lis from back
   for(int i=n-2;i>=0;i--)
   {
    for(int j=n-1;j>i;j--)
    {
      if(a[i]>a[j])
      {
        dp2[i]=max(dp2[i],dp2[j]+1);
      }
    }
   }
   for(int i=0;i<n;i++)
   {
    ma=max(ma,dp[i]+dp2[i]-1);
   }
    cout<<ma;
}