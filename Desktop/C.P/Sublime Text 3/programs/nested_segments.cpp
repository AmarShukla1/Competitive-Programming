//Tonight's the night and it is going to happen again and again.
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mp make_pair
#define pb push_back
#define T ll t; cin>>t; while(t--)
#define mod 1000000007
#define f(n) for(ll i = 0;i<n;i++)
#define endl "\n";
ll gcd(ll a,ll b){if(b==0){return a;}return gcd(b,a%b);}
struct test
{
	ll a,b,c;
};
bool comp(test i1,test i2)
{
	if(i1.a==i2.a){return i1.b>i2.b;}
	return i1.a<i2.a;
}
int main()
{
   ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
   #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
   #endif
   ll n;
   cin>>n;
   test a[n];
   f(n){cin>>a[i].a>>a[i].b;a[i].c=i;}
   sort(a,a+n,comp);ll maxi;ll max=-1;
   for(ll i=0;i<n;i++)
   {
   	if(a[i].b<=max)
   	{
   		cout<<a[i].c+1<<" "<<maxi+1;exit(0);
   	}
   	else if(max<a[i].b){max=a[i].b;maxi=a[i].c;}
   }
   cout<<-1<<" "<<-1; 
}