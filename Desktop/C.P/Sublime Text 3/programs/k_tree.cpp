//Tonight's the night and it is going to happen again and again.
//subtracting sum made from 1 to k minus sum made from 1 to d-1. 
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
    ll n,k,d;
   cin>>n>>k>>d;if(d>n){cout<<0;exit(0);}ll dp[n+1],dp1[n+1];memset(dp,0,sizeof(dp));
   memset(dp1,0,sizeof(dp1));dp[0]=1;dp1[0]=1;
   for(ll i=1;i<=n;i++)
   {
   	for(ll j=1;j<=k;j++)
   	{
   		if(i-j>=0)
   		{
          dp[i]+=dp[i-j];
          dp[i]%=mod;
   		}
   		else{break;}
   	}
   }
   for(ll i=1;i<=n;i++)
   {
   	for(ll j=1;j<=d-1;j++)
   	{
   		if(i-j>=0)
   		{
          dp1[i]+=dp1[i-j];
          dp1[i]%=mod;
   		}
   		else{break;}
   	}
   }
   if(dp[n]-dp1[n]<0){cout<<dp[n]-dp1[n]+mod;}
   else{cout<<dp[n]%mod-dp1[n]%mod;} 
}	