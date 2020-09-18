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
   int n;cin>>n;
   int a[n];int max1=-1;int max2=-1;int dp[n];
   f(n){cin>>a[i];dp[i]=a[i];}
   for(int i=0;i<n;i++)
   {
   	max1=a[i];//this initialisation was going wrong
   	for(int j=0;j<i;j++)
   	{
   		if(a[i]>a[j])
   		{
   		max1=max(max1,dp[i]+dp[j]);
   	    }
   	}
   	dp[i]=max(max1,dp[i]);
   	max2=max(max2,max1);
   }
   //f(n){cout<<dp[i]<<" ";}
   cout<<max2;
}