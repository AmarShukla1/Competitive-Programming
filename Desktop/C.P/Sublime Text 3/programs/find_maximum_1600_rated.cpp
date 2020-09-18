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
   ll n;cin>>n;ll a[n];
   f(n)
   {
   	cin>>a[i];
   }
   string s;ll ind=-1;cin>>s;ll sum1[n+2];ll sum2[n+2];mem(sum1,0);mem(sum2,0);
   for(ll i=n-1;i>=0;i--){if(s[i]=='1'){ind=i;break;}}
 if(ind==-1){cout<<0;exit(0);}
  sum1[0]=a[0];
  for(ll i=1;i<=ind;i++)
  {
    sum1[i]=a[i]+sum1[i-1];
    
  }
  sum2[ind]=a[ind];
for(ll i=ind-1;i>=0;i--)
{
	if(s[i]=='1'){sum2[i]=a[i]+sum2[i+1];}
	else{sum2[i]=sum2[i+1];}
	
}
ll sum=max(sum2[0],sum1[max(ind-1,0ll)]);
for(ll i=ind-1;i>=1;i--)
{
	if(s[i]=='1'){sum=max(sum,sum1[i-1]+sum2[i+1]);}
}
cout<<sum;
}