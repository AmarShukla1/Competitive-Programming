//Tonight's the night and it is going to happen again and again.
//this is 510div2D
//learnt pbds
#include<bits/stdc++.h> 
using namespace std;
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef long long ll;
#define pi pair<ll,ll> 
typedef tree<pi,null_type,less<pi>,rb_tree_tag,tree_order_statistics_node_update>pbds;
#define mp make_pair
#define pb push_back
#define T ll t; cin>>t; while(t--)
#define mod 1000000007
#define f(n) for(ll i = 0;i<int(n);i++)
#define endl "\n";
ll gcd(ll a,ll b){if(b==0){return a;}return gcd(b,a%b);}
int main()
{
   ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
   #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
   #endif
   ll n,t;
   pbds p;//in this pair been done for multiset as there can be more than one instance.
   //also in pbds we caN FIND elements less than x for j<i  but in this question we are to find
   //elements greater than x for j<i (s[j]>s[i]-t for j<i)so we do -(sign) for each element inserted and search is also 
   //-(sum-t) becomes t-sum 
   cin>>n>>t;
   ll sum=0,sum_main=0;ll x;
   for(ll i=0;i<n;i++)
   {
   	cin>>x;
    p.insert(pi(-sum,i));
    //we first insert the sum and then do sum+=x because we dont want the include current
    //one and find key of that 
    sum+=x;
    sum_main+=p.order_of_key(pi(-sum+t,-1));//cout<<p.order_of_key(t-sum)<<endl;
   }
   cout<<sum_main;
   //we do (,0) in (-sum+t,0) line bcoz we dont want to count equal elements in answer.
   /*for(int i=0;i<5;i++){cin>>n;p.insert(pi(n,i));}
   cout<<p.order_of_key(pi(-1,3));
   as here if we do (-1,0) then we will get rid of other -1 in answer,we could do -1.
   in place of 0 for surety. */	
}