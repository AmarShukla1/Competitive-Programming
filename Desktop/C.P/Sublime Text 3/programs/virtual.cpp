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
ll powtime(ll n)
{
	if(n==2){return -1;}
	ll c=0;ll p=1;
	while(1)
	{
		p=p*3;
		c++;
		if(p>=n){break;}
	}
	if(p>n){return c-1;}
	else{return c;}
}
int main()
{
   ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
   cout<<fixed<<setprecision(0);
   #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
   #endif 
    T{
    	ll n;cin>>n;ll p1=n;ll ind=powtime(n);
    	while(p1>0)
    	{
    	ll max1=powtime(p1);
    	if(max1==-1){break;}
    	v.pb(max1);
    	p1-=pow(3,max1);
        }
        sort(v.begin(),v.end());
        if(v.size()==ind+1){cout<<pow(3,ind);}
        else
        {
        	int k=0;
        for(int k=0;k<=ind;k++)
        {
           if(v[w]==k){w++;continue;}
           else{sum+=pow(3,k);if()}
        }
        } 
    }
}