//Tonight's the night and it is going to happen again and again.
//in this 2dp was the usual choice to solve this but if we take 0,1 the states increase as two will
//become four then eight...and the 
//transition isnt there but if we take total weight as a state then we have three choices 
//and the solution is now easy
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mp make_pair
#define pb push_back
#define T ll t; cin>>t; while(t--)
#define mod 1000000007
#define inf 1000000000000000000
#define mem(name,val) memset(name,val,sizeof(name))
#define f(n) for(ll i=0;i<n;i++)
#define rep(i,a,n) for(ll i=a;i<n;i++)
#define endl "\n"

ll gcd(ll a,ll b){if(b==0){return a;}return gcd(b,a%b);}
int n;int dp[32][15010];int a[32];
void weight(int index,int totalweight)
{
  if(dp[index][totalweight]!=-1){return;}
  if(index>n){return;}
  dp[index][totalweight]=1;
  weight(index+1,totalweight);
  weight(index+1,totalweight+a[index]);
  weight(index+1,abs(totalweight-a[index]));
}
int main()
{
   ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
   #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
   #endif
   mem(dp,-1); 
   cin>>n;f(n){cin>>a[i];}
   weight(0,0);
   int m,x;cin>>m;
   while(m--)
   {
    cin>>x;
    if(x>15000){cout<<"N ";}
    else{
    if(dp[n][x]==1){cout<<"Y ";}
    else{cout<<"N ";}
   }
 }
}