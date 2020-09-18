//Tonight's the night and it is going to happen again and again.
//we can find elements less than x using pbds in right side we know we can it in left side.
//we can find greater elemnets by subtracting n-(smaller elem).
//this works for unique elements. 
#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef long long ll;
typedef tree<ll,null_type,less<ll>,rb_tree_tag,tree_order_statistics_node_update>pbds;
#define mp make_pair
#define pb push_back
#define T ll t;cin>>t;while(t--)
#define mod 1000000007
#define mem(name,val) memset(name,val,sizeof(name))
#define f(n) for(ll i = 0;i<n;i++)
#define endl "\n"
//methods *find_by_order(),order_of_key()
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
   	ll n;cin>>n;ll a[n];pbds s;ll ans[n+1];mem(ans,0);
   	f(n){cin>>a[i];}ll c;
   	for(ll i=n-1;i>=0;i--)
   	{
   		s.insert(a[i]);
   		ll c=s.order_of_key(a[i]);
        c=(n-i-1-c);
   		ans[a[i]]=c;
   	}
   	for(ll i=1;i<=n;i++){cout<<ans[i]<<" ";}cout<<endl;
   } 
}