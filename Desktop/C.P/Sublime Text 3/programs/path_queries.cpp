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
ll w;
void build(int si,int ss,int se,int diff[])
{

}
void dfs(int s,vector<int>adj[],int vis[],int value[],int node_id[],int a1[])
{
	node_id[w]=s;
	value[w]=a1[s];w++;
    subtree[s]=1;
	vis[s]=1;
	for(auto x:adj[s])
	{
		if(vis[x]==0)
		{
			dfs(x,adj,vis,value,node_id,a1);
			subtree[s]+=subtree[x];
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
   int n,q,a,b;cin>>n>>q;int a1[n+1];
   for(int i=1;i<=n;i++){cin>>a1[i];}
   int diff[n+1];int index[n+1];int value[n+1];int node_id[n+1];
   int vis[n+1];memset(vis,0,sizeof(vis));vector<int>adj[n+1];
   f(n-1)
   {
   	cin>>a>>b;adj[a].pb(b);adj[b].pb(a);
   }
   dfs(1,adj,vis,value,node_id,a1);
   for(int i=1;i<=n;i++)
   {
   	index[node_id[i]]=i;
   }diff[1]=value[1];
   for(int i=2;i<=n;i++)
   {
   	diff[i]=value[i]-value[i-1];
   }
   build(1,1,n,diff);
   while(q--)
   {
   	cin>>x;
   	if(x==1)
   	{
   		cin>>s>>x;

   	}
   	else
   	{
   		cin>>s;
   		cout<<query
   	}
   }
}