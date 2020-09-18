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
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
   #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
   #endif
    int t;
    cin>>t;int u=1;
    while(t--)
    {
   int a,b,n,m;
   cin>>n>>m;
   vector<int>adj[n];
   v.clear();
   int vis[n]={0};
   int ind[n]={0};//indegree array  
   for(int i=0;i<m;i++)
   {
   	cin>>a>>b;
   	ind[b]++;
   	adj[a].push_back(b);
   }
   for(int i=0;i<n;i++)
   {
   	 if(ind[i]==0&&vis[i]==0)
   	 {
   	 	vis[i]=1;
   	 	dfs(i,adj,vis);
   	 }
   }
   int k=1;
   cout<<"Scenario #"<<u++<<":\n\n";
   for(auto i:v)
   {
   	cout<<k++<<" "<<i<<"\n\n";
   }
}
}