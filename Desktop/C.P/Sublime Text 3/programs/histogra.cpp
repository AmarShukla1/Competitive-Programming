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
   int n;long double l;cin>>n>>l;
   long double  a[n];
   for(int i=0;i<n;i++)
   {
   	cin>>a[i];
   }
   if(n==1){cout<<max(a[0],l-a[0]);exit(0);}
   sort(a,a+n);
   long double ans=0;
   cout<<setprecision(10)<<fixed;
   for(int i=1;i<n-1;i++)
   {
    long double d1=(a[i]-a[i-1])/2;
    long double d2=(a[i+1]-a[i])/2;
    ans=max(max(d1,d2),ans);
   }
   long double a1=max(a[0],(a[1]-a[0])/2);
   long double a2=max(l-a[n-1],((a[n-1]-a[n-2])/2));
   ans=max(max(a1,a2),ans);
   cout<<ans;
}