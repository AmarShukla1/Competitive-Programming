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
   T
   {
    map<ll,ll>m;
    ll sum=0;ll n;cin>>n;ll a[n];
    string s;cin>>s;
    f(n)
    {
      a[i]=(s[i]-'0')-1;

    }
    //using x....x trick
    if(a[0]==0){sum++;}
    rep(i,1,n)
    {
      a[i]+=a[i-1];if(a[i]==0){sum++;}
    }
    //f(n){cout<<a[i]<<" ";}
    rep(i,0,n)
    {
      m[a[i]]++;
    }
    for(auto t:m)
    {
      sum+=((t.second*(t.second-1))/2);
    }
    cout<<sum<<endl;
   } 
}