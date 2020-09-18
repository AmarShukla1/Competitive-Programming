//Tonight's the night and it is going to happen again and again.
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
int main()
{
   ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
   #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
   #endif
   int n;cin>>n;
   //'00' and '1' making sequence with that
   // i did fibonacci bcoz we can populate with 1 and the previous n-1th
   // and we can populate '00' with the n-2th one
   int fib[n+3];
   fib[1]=1;fib[2]=2;fib[3]=3;
   rep(i,4,n+1)
   {
    fib[i]=(fib[i-1]+fib[i-2])%15746;
   }
   cout<<fib[n];
}