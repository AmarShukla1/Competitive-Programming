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
int main()
{
   ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
   #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
   #endif
   int n,weight;cin>>n>>weight;int dp[weight+1];
   memset(dp,0,sizeof(dp));
   int wt[n];f(n){cin>>wt[i];}
   int val[n];f(n){cin>>val[i];}
   //knapsack such that val is max.(simple)
   for(int i=0;i<n;i++)//here we knocked offone state
   {
   	for(int j=weight;j>=wt[i];j--)
   	{
   		dp[j]=max(dp[j],dp[j-wt[i]]+val[i]);//wt[i-1] nahi kyonki i=0 se shuru hai
   		//dp[weight] me max value hai.
   	}
   }
   cout<<dp[weight]; 
}