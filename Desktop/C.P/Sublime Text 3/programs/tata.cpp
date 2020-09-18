//Tonight's the night and it is going to happen again and again.
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mp make_pair
#define pb push_back
#define T ll t; cin>>t; while(t--)
#define mod 1000000007
#define f(n) for(ll i = 0;i<n;i++)
#define endl "\n"
ll gcd(ll a,ll b){if(b==0){return a;}return gcd(b,a%b);}
struct test
{
	int a,b;
};
bool comp(test i1,test i2)
{
	if(i1.b==i2.b){return i1.a<i2.a;}
	return i1.b<i2.b;
}
int main()
{
   ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
   #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
   #endif
   int n;cin>>n;
   test a[n];
   f(n){cin>>a[i].a>>a[i].b;}sort(a,a+n,comp);int c=1;int t=a[0].b;
   for(int i=1;i<n;i++)
   {
    if(t<a[i].a){t=a[i].b;c++;}
   }
   cout<<c; 
}