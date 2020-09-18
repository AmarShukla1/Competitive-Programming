#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mp make_pair
vector<int>ord;
void dfs(int s,int vis[],vector<int>adj[])
{
	vis[s]=1;
	for(auto x:adj[s])
	{
		if(vis[x]==0)
		{
			vis[x]=1;
			dfs(x,vis,adj);
		}
	}
	ord.push_back(s);
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
   while(1)
   { 
   int n,m,x,y;
   cin>>n>>m;
   ord.clear();
   vector<int>adj[n+1];
int vis[n+1]={0};
   if(n==0&&m==0){break;}
   for(int i=0;i<m;i++)
   {
   	cin>>x>>y;
   	adj[x].push_back(y);
   }
   for(int i=1;i<=n;i++)
   {
   	if(!vis[i])
   	{
   		dfs(i,vis,adj);
   	}
   }
   reverse(ord.begin(),ord.end());
   for(auto t:ord)
   {
   	cout<<t<<" ";
   }
   cout<<"\n";
}
}