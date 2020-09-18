//Tonight's the night and it is going to happen again and again.
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mp make_pair
#define pb push_back
#define T ll t; cin>>t; while(t--)
#define mod 9901
#define mem(name,val) memset(name,val,sizeof(name))
#define f(n) for(ll i = 0;i<n;i++)
#define rep(i,a,n) for(ll i=a;i<n;i++)
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
    cin>>n;
    //absolute fucking dp
    //I love this method
    //here 0 is no lion in nth line,1 is lion in left in nth line and 2 is lion in right in nth
    //line.the transitions are common sense
   int dp[n+1][3];
   dp[1][0]=1;dp[1][1]=1;dp[1][2]=1;
   rep(i,2,n+1)
   {
   	dp[i][0]=(dp[i-1][0]+dp[i-1][1]+dp[i-1][2])%mod;
   	//if no lion in nth line then add it with no lion in n-1th line,lion in right and left in 
   	//n-1th line.
   	dp[i][1]=(dp[i-1][0]+dp[i-1][2])%mod;
   	dp[i][2]=(dp[i-1][0]+dp[i-1][1])%mod;
   }
   cout<<(dp[n][0]+dp[n][1]+dp[n][2])%mod;
   //second method
   //turns out there is a nice recurrence to it
   int dp[n+1];
   dp[0]=1;dp[1]=3;
   rep(i,2,n+1)
   {
   	dp[i]=(dp[i-1]*2+dp[i-2])%mod;
   }
   cout<<dp[n]<<endl; 
}