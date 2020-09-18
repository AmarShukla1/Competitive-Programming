//strongly connected components program.
//prints the strongly connected components.
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mp make_pair
#define pb push_back
vector<int>v;
void dfs(int s,vector<int>adj[],int vis[])
{
	for(auto x:adj[s])
	{
		if(vis[x]==0)
		{
			vis[x]=1;
			dfs(x,adj,vis);
		}
	}
	v.push_back(s);
}
void dfs2(int s,vector<int>adj2[],int vis[])
{
		for(auto x:adj2[s])
	{
		if(vis[x]==0)
		{
			vis[x]=1;
			dfs2(x,adj2,vis);
		}
	}
	cout<<s<<" ";
}
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
   #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
   #endif
   int n,m,a,b;
   cin>>n>>m;
   vector<int>adj[n+1];
   vector<int>adj2[n+1];
   int vis[n+1]={0};
   for(int i=0;i<m;i++)
   {
   	cin>>a>>b;
   	adj[a].push_back(b);
   	adj2[b].push_back(a);
   }
   for(int i=1;i<=n;i++)
   {if(vis[i]==0)
   	{dfs(i,adj,vis);}
   }
   memset(vis,0,sizeof(vis));
   for(auto t:v){cout<<t<<" ";}cout<<"\n";
   for(int i=v.size()-1;i>=0;i--)
   {
   	if(vis[v[i]]==0)
   	{
   		vis[v[i]]=1;dfs2(v[i],adj2,vis);
   		cout<<"\n";
   	}
   }
}