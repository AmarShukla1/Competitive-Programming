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
   ll n;ll c=1;cin>>n;int r;int d=0;ll a[n+1];a[0]=1000000000000;
   for(ll i=1;i<=n;i++){cin>>a[i];}ll max1=-1;
   for(ll i=2;i<=n;i++)
   { 
   	if(a[i]>a[i-1]){c++;max1=max(max1,c);}
   	else if(a[i]<a[i-1]&&a[i]>a[i-2])
   	{
   		if(d==0){d=1;r=c;continue;}
   		if(d==1){c=c-r;d=0;}
   	}
   	else{max1=max(max1,c);c=1;}
   }
   max1=max(max1,c);
   cout<<max1;
}