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
  //path compression heuristic
  if(p[u]!=u)
  {
  return p[u]=find(p[u],p);
  }
  return p[u];
}
void union1(int u,int v,int rank[],int p[],int max1[],int min1[],int sum[])
{
  //rank heuristic or small to big heuristic
  int a=find(u,p);
  int b=find(v,p);
  if(rank[a]==rank[b])
  {
    rank[a]++;
  }
  if(rank[a]>rank[b])
  {
    p[b]=a;
    max1[a]=max(max1[b],max1[a]);//as a has larger rank or big we will do the 
    //associative or commutative funvtion work here.
    min1[a]=min(min1[a],min1[b]);
    if(b!=a)
    {
    sum[a]+=sum[b];
    }
  }
  else
  {
    p[a]=b;
    max1[b]=max(max1[b],max1[a]);
    min1[b]=min(min1[a],min1[b]);
    if(b!=a)
    {
    sum[b]+=sum[a];
    }
  }
}
int main()
{
   ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
   #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
   #endif
   int n,m;cin>>n;int p[n+1];rep(i,1,n+1){p[i]=i;}int rank[n+1];mem(rank,0);
   int min1[n+1],max1[n+1],sum[n+1];rep(i,1,n+1){min1[i]=i;}rep(i,1,n+1){max1[i]=i;}rep(i,1,n+1){sum[i]=1;}
   cin>>m;
   string s;int a,b;
   f(m)
   {
    cin>>s;
    if(s=="union")
    {
       cin>>a>>b;
       union1(a,b,rank,p,max1,min1,sum);
    }
    else 
    {
         cin>>a;
         int k=find(a,p);
         cout<<min1[k]<<" "<<max1[k]<<" "<<sum[k]<<endl;
    }
   } 
}