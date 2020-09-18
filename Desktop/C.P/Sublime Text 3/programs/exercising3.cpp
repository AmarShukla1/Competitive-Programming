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
   ll x,k,d,ans1,ans2=100000000000000000,min1;
   cin>>x>>k>>d;
   x=abs(x);
   ll y1=x/d;int c=0;
   if(k%2==0&&(y1&1)){y1++;c=1;}
   else if(k%2!=0&&(y1%2==0)){y1++;}
   if(y1<k)
   {
    ans1=abs(x-(d*y1));
    ans2=min(ans2,abs(x-(d*(y1+2))));
    min1=min(ans1,ans2);
    cout<<min1;
   }
   else if(y1==k)
   {
    ans1=x-d*y1;cout<<abs(ans1);
   }
   else
   {
    cout<<abs(x-k*d);
   } 
}