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
int dp[100001];
int main()
{
   ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
   #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
     #endif 
   int n;int c=0;cin>>n;int a[n];ll max_sum=n*1000;
   f(n){cin>>a[i];}dp[0]=1;
   for(int i=0;i<n;i++)
   {
   	for(int j=max_sum;j>=a[i];j--)
   	{
   		dp[j]+=dp[j-a[i]];dp[j]%=mod;
   	}
   }//did the 0/1 knapsack ordered.
   vector<int>v;
  for(int i=1;i<=max_sum;i++){if(dp[i]>0){v.pb(i);}}
  	cout<<v.size()<<endl;for(auto t:v){cout<<t<<" ";}
}