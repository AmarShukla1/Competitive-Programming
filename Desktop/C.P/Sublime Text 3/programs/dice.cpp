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
int dp[1000001];
int main()
{
   ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
   #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
   #endif
   int x;cin>>x;
   int a[6]={1,2,3,4,5,6};
   dp[0]=1;
   for(int i=0;i<=x;i++)
   {
   	for(int j=0;j<6;j++)
   	{
   		if(i>=a[j])
   		{
   			dp[i]+=dp[i-a[j]];dp[i]=dp[i]%mod;
   		}
   	}
   }
   cout<<dp[x]%mod;
}