//Tonight's the night and it is going to happen again and again.
//coin combinations 1
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
   int n,x;
   cin>>n>>x;int a[n]; 
   f(n){cin>>a[i];}
   sort(a,a+n);dp[0]=1;//not dp[a[i]]=1 bcoz if dp[3]=1 ad dp[1]=1 then dp[4-1] ke 2 ways 
   //ho jayenge aur vaise hi dp[4-3].total 4 ways 2 ki jagah isliye.
   for(int i=a[0];i<=x;i++)
   {
   	for(int j=0;j<n;j++)
   	{
   		if(i-a[j]>=0)
   		{
   		dp[i]+=dp[i-a[j]];
   		dp[i]=dp[i]%mod;
   	    }
   	    else{break;}
   	}
   }
   cout<<dp[x]%mod; 
}