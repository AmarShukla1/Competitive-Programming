//Tonight's the night and it is going to happen again and again.
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mp make_pair
#define pb push_back
#define T ll t; cin>>t; while(t--)
#define mod 1000000007
#define inf 1000000000000000000
#define mem(name,val) memset(name,val,sizeof(name))
#define f(n) for(ll i=0;i<n;i++)
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
    ll n;cin>>n;//if(n==3){cout<<2<<endl;continue;}
    ll sum=(n*(n+1))/2;
    if(sum&1){cout<<0<<endl;}
    else
    {
       sum/=2;
       ll lo=1;ll hi=n;ll max1=0,sum1,n1;
       while(lo<=hi)
       {
        ll mid=lo+(hi-lo)/2;
        sum1=(mid*(mid+1))/2;//cout<<sum1<<endl;
        if(sum1<=sum)
        {
          lo=mid+1;
          if(max1<sum1)
            {
              max1=sum1;
              n1=mid;
            }
        }
       else
       {
        hi=mid-1;
       }
       }
       if(max1==sum){cout<<(n1*(n1-1))/2+(n-n1)<<endl;}
       else{cout<<n-n1<<endl;}
    }
   } 
}