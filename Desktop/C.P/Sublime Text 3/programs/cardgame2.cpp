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
ll f[100005];
ll modexp(ll x,ll n)
{
    if(n==0)
        {return 1ll;}
    else if(n%2 == 0) 
        {return modexp((x*x)%mod,n/2);}
    else                            
        {return (x*modexp((x*x)%mod,(n-1)/2))%mod;}
}
int main()
{
   ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
   #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
   #endif
   f[0]=1;
   rep(i,1,100005)
   {
   	f[i]=(f[i-1]*i)%mod;
   }
   T
   {
   	ll n,ans;cin>>n;
   	ll a[n];ll max1=0;ll c=0;
   	f(n){cin>>a[i];max1=max(max1,a[i]);}
    f(n){if(a[i]==max1){c++;}}
    if(c&1)
    {
     ans=(modexp(2,n))%mod;
    }
    else
    {
        ans=(modexp(2,n))%mod;
        //wo jo max honge unko arrange karna fir aage ka plan.
        ll mul=(f[c]*modexp(f[c/2],mod-2)%mod*modexp(f[c/2],mod-2)%mod)%mod;//ncn/2
        ll ans1=(modexp(2,n-c))%mod;
        ans1=(ans1*mul)%mod;
        ans=ans-ans1;
        if(ans<0){ans+=mod;}
        else{ans%=mod;}
    }
    cout<<ans<<endl;
   } 
}