//Tonight's the night and it is going to happen again and again.
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mp make_pair
#define pb push_back
#define T ll t; cin>>t; while(t--)
#define mod 1000000007
#define inf 1000000000000
#define mem(name,val) memset(name,val,sizeof(name))
#define f(n) for(ll i = 0;i<n;i++)
#define endl "\n"
ll gcd(ll a,ll b){if(b==0){return a;}return gcd(b,a%b);}
bool isprime[200030];
int main()
{
   ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
   #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
   #endif
   ll n,m;ll k=200000;
   cin>>n>>m;vector<ll>v;
   isprime[0]=1;isprime[1]=1;
   for(ll i=2;i<=k;i++)
   {
   	if(isprime[i]==0){v.push_back(i);
   	for(ll j=i*i;j<=k;j+=i)
   	{
   		isprime[j]=1;
   	}
   }
   }
   //for(auto t:v){cout<<t<<" ";}
   ll a[n][m];
   for(ll i=0;i<n;i++)
   {
   	for(ll j=0;j<m;j++)
   	{
   		cin>>a[i][j];
   		ll k=*lower_bound(v.begin(),v.end(),a[i][j]);
   		a[i][j]=k-a[i][j];
   	}
   }
   ll sum=0;ll sum_min=inf;
   for(ll i=0;i<n;i++)
   {
   	for(ll j=0;j<m;j++)
   	{
   		sum+=a[i][j];
   	}
   	sum_min=min(sum_min,sum);sum=0;
   }
   for(ll i=0;i<m;i++)
   {
   	for(ll j=0;j<n;j++)
   	{
   		sum+=a[j][i];
   	}
   	sum_min=min(sum_min,sum);sum=0;
   }
   cout<<sum_min;
}