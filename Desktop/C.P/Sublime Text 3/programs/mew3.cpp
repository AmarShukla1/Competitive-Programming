//Tonight's the night and it is going to happen again and again.
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mp make_pair
#define pb push_back
#define T ll t; cin>>t; while(t--)
#define mod 1000000007
#define f(n) for(ll i = 0;i<n;i++)
ll gcd(ll a,ll b){if(b==0){return a;}return gcd(b,a%b);}
int main()
{
   ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
   #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
   #endif
   int n,m;cin>>n>>m;if(n>m){cout<<n-m;exit(0);}
   //try to build a graph that reaches m from n.
   //n->n*2.,n-1
   vector<int>adj[4*m+1];
   int vis[4*m+1];memset(vis,0,sizeof(vis));
   for(int i=1;i<=2*m;i++)
   {
    adj[i].pb(i*2);
    adj[i].pb(i-1);
   }
   //basically shortest path from n to m in this graph.
   //bfs can be used to find it in unweighted graph
   queue<int>q;
   q.push(n);int level[4*m+1];memset(level,0,sizeof(level));
   vis[n]=1;int it=0;
   while(!q.empty())
   {
    int x=q.front();
    q.pop();
    for(auto v:adj[x])
    {
      if(vis[v]==0)
      {
        q.push(v);
        level[v]=level[x]+1;
        vis[v]=1;
      }
    }
    if(vis[m]==1){break;}
   }
   cout<<level[m];
}
