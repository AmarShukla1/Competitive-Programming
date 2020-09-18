//Tonight's the night and it is going to happen again and again.
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mp make_pair
#define pb push_back
#define T ll t; cin>>t; while(t--)
#define mod 1000000007
#define mem(name,val) memset(name,val,sizeof(name))
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
   int n;cin>>n;int a[n];int p[n];mem(p,-1);
   f(n){cin>>a[i];}int max1=1;int pos;
   int dp[n];f(n){dp[i]=1;}
   for(int i=0;i<n;i++)
   {
      for(int j=0;j<i;j++)
      {
         if(a[i]>a[j]&&dp[i]<dp[j]+1)
         {
            dp[i]=dp[j]+1;
            p[i]=j;
            if(max1<dp[i]){max1=dp[i];pos=i;}
         }
      }
   }vector<int>s;
   while(pos!=-1)
   {
      s.pb(a[pos]);
      pos=p[pos];
   }
   reverse(s.begin(),s.end());
   cout<<max1<<endl; 
   for(auto t:s){cout<<t<<" ";}
}