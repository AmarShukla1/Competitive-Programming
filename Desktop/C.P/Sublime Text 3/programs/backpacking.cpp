#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mp make_pair
#define pb push_back
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
   #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
  ll t,n,q,k;
  cin>>t;
  while(t--)
  {
   cin>>n>>q;ll a[n];ll sum[n+1];sum[0]=0;
   for(ll i=0;i<n;i++)
   {
      cin>>a[i];
   }
   sort(a,a+n);
   for(ll i=0;i<n;i++)
      {
         sum[i+1]=sum[i]+a[i];
      }
   while(q--)
   {
      cin>>k;ll t1=0;ll count=0;ll y;
      ll ind=lower_bound(a,a+n,k)-a+1;
      ll x=ind-1;
      count+=n-ind+1;
      ll lo=0;ll hi=x;
      while(lo<=hi)
      {
         ll mid=lo+(hi-lo)/2;
         y=k*mid-(sum[x]-sum[x-mid]);
         if(y<=x-mid)
         {
            t1=max(t1,mid);
            lo=mid+1;
         }
         else
         {

            hi=mid-1;
         }
      }
      count+=t1;
   cout<<count<<"\n";
   }
  }   
}