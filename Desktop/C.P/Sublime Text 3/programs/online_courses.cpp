//isme reverse nai karna hai
/*#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
unordered_map<int,int>m;
vector<int>v;int cycle;int color[100009];int count1; vector<int>adj[100009];
int vis[100009];
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
  count1++;	
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
   int n,k,f,x,d;
   cin>>n>>k;
  vector<int>req;
   for(int i=0;i<k;i++)
   {
   	cin>>f;req.push_back(f);
   }
   for(int i=1;i<=n;i++)
   {
   	cin>>d;
   	for(int j=0;j<d;j++)
   	{
   		cin>>x;
   		adj[i].push_back(x);
   	}
   }
   for(auto t:req)
   {
   	if(color[t]==0)
   	{
        dfs(adj,t);
   	}
   }
   if(cycle==0){
       for(auto t:req)
       {
       	if(vis[t]==0)
       	{
       		vis[t]=1;
       		dfs2(t);
       	}
       }
       cout<<count1<<"\n";
       for(int i=0;i<v.size();i++)
       {
       	cout<<v[i]<<" ";
       }   
      }
   else
   {
   	cout<<-1;
   }
}*/
//isme reverse nai karna hai
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
unordered_map<int,int>m;
vector<int>v;int cycle;int color[100009];int count1; vector<int>adj[100009];
int vis[100009];
void dfs2(int s)//this is the better cycle method I favour.
{
  count1++;
  color[s]=1; 
  for(auto x:adj[s])
  {
   if(color[x]==1){cycle=1;cout<<-1;exit(0);}
    if(vis[x]==0)
    {
      vis[x]=1;
      dfs2(x);
    }
  }
  color[s]=0;
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
   int n,k,f,x,d;
   cin>>n>>k;
  vector<int>req;
   for(int i=0;i<k;i++)
   {
    cin>>f;req.push_back(f);
   }
   for(int i=1;i<=n;i++)
   {
    cin>>d;
    for(int j=0;j<d;j++)
    {
      cin>>x;
      adj[i].push_back(x);
    }
   }
   
       for(auto t:req)
       {
        if(vis[t]==0)
        {
          vis[t]=1;
          dfs2(t);
        }
       }
       if(cycle==0){
       cout<<count1<<"\n";
       for(int i=0;i<v.size();i++)
       {
        cout<<v[i]<<" ";
       }   
      }
}
