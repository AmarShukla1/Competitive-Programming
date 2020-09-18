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
   T
   {
      map<int,int>m;
      int n,k;cin>>n>>k;
      int a[n];f(n){cin>>a[i];}
      ll sum=k;
      int count1=0;
      f(n/2)
      {
         if(a[i]+a[n-i-1]==sum){continue;}
         else
         {
            if(a[i]+a[n-1-i]<sum)
            {
                if(sum-k>max(a[i],a[n-i-1]))
                {
                  count1+=2;
                }
                else
                {
                  count1+=1;
                }
            }
            else
            {
                if(sum-1<min(a[i],a[n-i-1]))
                {
                  count1+=2;
                }
                else
                {
                  count1+=1;
                }
            }
         }
      }
      cout<<count1<<endl;
   } 
}