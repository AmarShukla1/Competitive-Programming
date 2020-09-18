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
ll dp[60001];
int main()
{
   ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
   #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
   #endif
   ll n;cin>>n;ll inf=1000000000;//greedy soln here doesnt work
   for(ll i=0;i<=n;i++){dp[i]=inf;}
   for(ll i=1;i<=244;i++)
   {
    dp[i*i]=1;
   }
   for(ll i=1;i<=n;i++)
   {
   	for(ll j=1;j*j<=n;j++)
   	{
   		if(i>j*j){
   		dp[i]=min(dp[i],dp[i-j*j]+1);}
   		else{break;}
   	}
   }cout<<dp[n];
}