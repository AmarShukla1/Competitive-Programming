#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mp make_pair
#define pb push_back
void dfs(int s,vector<int>adj[],int vis[])
{
	vis[s]=1;
	for(int i=0;i<adj[s].size();i++)
	{
		int x=adj[s][i];
		if(vis[x]==0)
		{
			dfs(x,adj,vis);
		}
	}
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
   vector<int>adj[1000];
   int vis[1000]={0};
   ll r=0;
   int n,m,c=0,t,k;cin>>n>>m;
   for(int i=0;i<n;i++)
   {
   	cin>>t;r+=t;
   	for(int j=0;j<t;j++)
   	{
   		cin>>k;adj[101+i].push_back(k);
   		adj[k].push_back(101+i);
   		//when you begin the thought dont fear to execute it.
   	}
   }
   if(r!=0)
   {
   for(int i=101;i<101+n;i++)
   {
   	if(vis[i]==0)
   	{
   		dfs(i,adj,vis);
   		c++;
   	}
   }
   cout<<c-1;
   }
   else
   {
   	cout<<n;
   }    
}