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
int find(int u,int p[])
{
 if(p[u]!=u)
 {
  return p[u]=find(p[u],p);
 }
 return p[u]; 
}
void union1(int u,int v,int rank[],int p[])
{
  u=find(u,p);
  v=find(v,p);
  if(rank[u]==rank[v])
  {
    rank[u]++;
  }
  if(rank[u]>rank[v])
  {
    p[v]=u;
  }
  else
  {
    p[u]=v;
  }
}
int main()
{
   ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
   #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
   #endif
   int n;cin>>n;int rank[n+1];mem(rank,0);
   int p[n+1];rep(i,1,n+1){p[i]=i;}
   int m;cin>>m;
   string s;int u,v;
   while(m--)
   {
     cin>>s>>u>>v;
     if(s=="union")
     {
        union1(u,v,rank,p);
     }
     else
     {
        int a=find(u,p);int b=find(v,p);
        if(a==b){cout<<"YES"<<endl;}
        else{cout<<"NO"<<endl;}
     }
   }
   //for(int i=1;i<n+1;i++){cout<<p[i]<<" ";} 
}