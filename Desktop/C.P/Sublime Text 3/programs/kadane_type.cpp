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
    cout<<fixed<<setprecision(3);
   int n;cin>>n;double a[n];
   f(n){cin>>a[i];}
   double curr_max=a[0];
   double max_so_far=a[0];
   for(int i=1;i<n;i++)
   {
   	 curr_max=max(a[i],curr_max*a[i]);
   	 max_so_far=max(max_so_far,curr_max);
   }
   cout<<max_so_far; 
}