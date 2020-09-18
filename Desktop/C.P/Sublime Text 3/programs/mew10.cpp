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
   //ordered 1 time(kinda 0/1 knapsack)
    ll n;cin>>n;ll dp[n+1];
    for(ll i=1;i<=n;i++){dp[i]=0;}dp[0]=1;
   for(ll i=1;i<=n;i++)
   {
   	for(ll j=n;j>=i;j--)//used this in 0/1 knapsack
   	{
   		dp[j]+=dp[j-i];
   	}
   }
   cout<<dp[n]-1;//subtracred 1 here bcoz stair has atleast 2 steps 
}