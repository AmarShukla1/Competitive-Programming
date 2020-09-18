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
    
   
   ll inf=1000000000000;
   ll n;cin>>n;ll a[n];
   f(n){cin>>a[i];}
   vector<ll>dp(n+1,inf);ll max1=-1;
   dp[0]=-inf;
   //here dp[i] is ending element of incresing subseq.
   for(ll i=0;i<n;i++)
   {
   	ll j=upper_bound(dp.begin(),dp.end(),a[i])-dp.begin();//a[i] can modify atmost 1 element in dp
   	//and thats why we find its position by bin search.
   		if(dp[j-1]<a[i]&&a[i]<dp[j])
   		{
   			dp[j]=a[i];
   		}
   }
   for(ll i=1;i<=n;i++){if(dp[i]<inf){max1=i;}}
   cout<<max1; 
}