//Tonight's the night and it is going to happen again and again.
//main idea was to place the left zero leftmost.
//pehle 2 ind unitialised tha dusre 2 exit call kar rhe the 5th wale me endl lagana bhulgaye the
//phir ll ki dikkat as k was n^2. 
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
   T
   {
   	ll n,k;cin>>n>>k;
    string s;cin>>s;ll ind=-1;
    f(s.length()){if(s[i]=='1'){ind=i;break;}}
    if(ind==-1){cout<<s<<endl;}
    else{
    for(ll i=ind+1;i<s.length();i++)
    {
      if(s[i]=='0')
      	{
      		ll a1=min(i-ind,k);
      		if(a1<=k && s[i-a1]=='1')
      		{
      			swap(s[i-a1],s[i]);
      			k-=a1;
      			ind++;
      		}
      		else if(s[i-a1]=='0')
      		{
              for(int j=i-a1+1;j<i;j++)
              {
              	if(s[j]=='1'){swap(s[j],s[i]);ind=j+1;break;}
              }
              k-=(i-ind-1);
      		}
      	}
        if(k<=0){break;}	
    }
    cout<<s<<endl;
    }
   } 
}