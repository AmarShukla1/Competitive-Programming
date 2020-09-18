//Tonight's the night and it is going to happen again and again.
//continuos subarray twist 
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
   int a[n];f(n){cin>>a[i];}
   int dleft[n],dright[n];
   dleft[0]=a[0];int max_sum=a[0];
   rep(i,1,n)
   {
    dleft[i]=max(dleft[i-1]+a[i],a[i]);
    max_sum=max(max_sum,dleft[i]);
   }//max subarray ending in i
   dright[n-1]=a[n-1];
   for(int i=n-2;i>=0;i--)
   {
    dright[i]=max(dright[i+1]+a[i],a[i]);
   }//max subarray starting from i
   rep(i,1,n-1)
   {
    max_sum=max(max_sum,dleft[i-1]+dright[i+1]);
    //ek ka gap means wo number chod ke adding max subarray ending in i and starting from i. 
   }
   cout<<max_sum;
}