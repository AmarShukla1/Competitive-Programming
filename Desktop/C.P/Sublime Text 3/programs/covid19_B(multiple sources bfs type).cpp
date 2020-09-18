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
    struct test{int a,b;};
   T
   {
      int n;cin>>n;test a[n];int max1=0;f(n){cin>>a[i].a;a[i].b=i;}int vis[10];mem(vis,0);
      int min1=100000000;
      f(n)
      {
         queue<int>q;
         q.push(a[i].a);
        vis[i]=1;
        while(!q.empty())
        {
         int x=q.front();
         q.pop();
        rep(j,a[i].b+1,n)
        {
            if(x>a[j].a)
            {
               if(vis[a[j].b]==0)
               {
               q.push(a[j].a);
               vis[a[j].b]=1;
               }
            }
        }
        rep(j,0,a[i].b)
        {
           if(x<a[j].a)
           {
            if(vis[a[j].b]==0)
            {
            q.push(a[j].a);
            vis[a[j].b]=1;
            }
           }
        }
      }
      int c=0;
      f(10){if(vis[i]==1){c++;}}
      max1=max(max1,c);
      min1=min(min1,c);
      mem(vis,0);
   }
   cout<<min1<<' '<<max1<<endl;
   } 
}