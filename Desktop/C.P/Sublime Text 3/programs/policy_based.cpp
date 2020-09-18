//Tonight's the night and it is going to happen again and again.
#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef long long ll;
typedef tree<ll,null_type,less<ll>,rb_tree_tag,tree_order_statistics_node_update>pbds;
//methods *find_by_order(),order_of_key()
#define mp make_pair
#define pb push_back
#define T ll t; cin>>t; while(t--)
#define mod 1000000007
#define f(n) for(ll i = 0;i<n;i++)
#define endl "\n";
ll gcd(ll a,ll b){if(b==0){return a;}return gcd(b,a%b);}
int main()
{
   ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
   #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
   #endif
   ll q;cin>>q;ll x;
   pbds p;
   while(q--)
   {
     char ch;cin>>ch>>x;
     if(ch=='I')
     {
      p.insert(x);
     }
     else if(ch=='D')
     {
     	p.erase(x);
        //cout<<"kya"<<endl;
     }
     else if(ch=='K')
     {
      if(x>p.size()){cout<<"invalid"<<endl;}	
      else{cout<<*p.find_by_order(x-1)<<endl;}
     }
     else if(ch=='C')
     {
       cout<<p.order_of_key(x)<<endl;
     }
   }
}