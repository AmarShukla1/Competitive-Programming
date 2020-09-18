//Tonight's the night and it is going to happen again and again.
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mp make_pair
#define pb push_back
#define T ll t; cin>>t; while(t--)
#define mod 1000000007
#define f(n) for(ll i = 0;i<n;i++)
ll gcd(ll a,ll b){if(b==0){return a;}return gcd(b,a%b);}
int cnt[6];
int main()
{
   ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
   #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
   #endif
   int n;cin>>n;int a[n];int b[6]={4,8,15,16,23,42};
   f(n){cin>>a[i];a[i]=lower_bound(b,b+6,a[i])-b;}
   for(int i=0;i<n;i++)
   {
   	if(a[i]==0)
   	{
      cnt[0]++;
   	}
   	else
   	{
   		if(cnt[a[i]-1]>0)
   		{
   			--cnt[a[i]-1];
   			++cnt[a[i]];
   		}
   	}
   }
   cout<<(n-6*cnt[5]);
}