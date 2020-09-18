//Tonight's the night and it is going to happen again and again.
//removing digit graphs solution.
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mp make_pair
#define pb push_back
#define T ll t; cin>>t; while(t--)
#define mod 1000000007
#define f(n) for(ll i = 0;i<n;i++)
#define endl "\n"
ll gcd(ll a,ll b){if(b==0){return a;}return gcd(b,a%b);}
vector<int>adj[1000001];
int main()
{
   ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
   #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
   #endif
   int n;cin>>n;int vis[n+1];
   int level[n+1];memset(level,0,sizeof(level));
   memset(vis,0,sizeof(vis));
   //graph solution
   for(int i=1;i<=n;i++)
   {
   	int t=i;
   	while(t>0)
   	{
   		int d=t%10;
   		adj[i].pb(i-d);
   		t=t/10;
   	}
   }
   queue<int>q;q.push(n);level[n]=1;vis[n]=1;
   while(!q.empty())
   {
   	int s=q.front();
   	q.pop();
   	for(auto x:adj[s])
   	{
   		if(vis[x]==0)
   		{
   			q.push(x);
   			vis[x]=1;
   			level[x]=level[s]+1;
   		}
   	}
   }
   cout<<max(0,level[0]-1); 
}