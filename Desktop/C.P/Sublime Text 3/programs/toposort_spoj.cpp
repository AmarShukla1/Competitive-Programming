//isme reverse nai karna hai
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<int>v;int cycle;int color[10009];vector<int>adj[10009];
int vis[10009];
void dfs(vector<int>adj[],int s){//topological sort doesnt apply to cyclic graphs
    color[s]=1; // Processing node - Yellow
    for(auto u: adj[s]){
        if(color[u]==1){cycle=1;}
        if(color[u]==0){dfs(adj,u);}
    }
    color[s]=2; // Processed node - Green
}
void dfs2(int s)
{	
  for(auto x:adj[s])
  {
  	if(vis[x]==0)
  	{
      vis[x]=1;
      dfs2(x);
  	}
  }
  v.push_back(s);
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
   int n,m,f,x,d;
   cin>>n>>m;
   for(int i=0;i<m;i++)
   {
    cin>>f>>x;
    adj[f].push_back(x);
   }
   for(int s=1;s<=n;s++)
   {
    sort(adj[s].begin(),adj[s].end(),greater<int>());
   }
   for(int i=1;i<=n;i++)
   {
   	if(color[i]==0)
   	{
        dfs(adj,i);
   	}
   }
   if(cycle==0){
       for(int i=n;i>=1;i--)
       {
       	if(vis[i]==0)
       	{
       		vis[i]=1;
       		dfs2(i);
       	}
       }
       for(int i=v.size()-1;i>=0;i--)
       {
       	cout<<v[i]<<" ";
       }   
      }
   else
   {
   	cout<<"Sandro fails.";
   }
}