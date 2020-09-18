//Tonight's the night and it is going to happen again and again.
//how to efficiently dfs n times in this question
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mp make_pair
#define pb push_back
#define T ll t; cin>>t; while(t--)
#define mod 1000000007
#define mem(name,val) memset(name,val,sizeof(name))
#define f(n,a) for(ll i = a;i<n;i++)
#define endl "\n"
ll it,num;
ll gcd(ll a,ll b){if(b==0){return a;}return gcd(b,a%b);}
void dfs(ll s,vector<ll>adj[],ll vis[],ll ans[],ll b[],ll vis2[])
{

	vis[s]=1;
	for(auto x:adj[s])
	{
		if(vis2[x]==1){continue;}
		if(vis[x]==0)
		{
			b[x]-=min(b[x],num);
			if(b[x]<=0){ans[x]=min(ans[x],it);}
			dfs(x,adj,vis,ans,b,vis2);
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
   T{
   	ll n,a1,b1;cin>>n;ll ans[n+1];ll vis[n+1];vector<ll>adj[n+1];mem(vis,0);ll a[n+1],b[n+1],p[n+1];
   	ll vis2[n+1];f(n+1,0){ans[i]=2*n;}mem(vis2,0);
   	f(n-1,0)
   	{
   		cin>>a1>>b1;adj[a1].pb(b1);adj[b1].pb(a1);
   	}
   	f(n+1,1){cin>>p[i];}f(n+1,1){cin>>a[i];}f(n+1,1){cin>>b[i];}
   	for(ll i=1;i<=n;i++)
   	{
   		it=i;num=a[p[i]];b[p[i]]-=min(b[p[i]],num);if(b[p[i]]<=0){ans[p[i]]=min(ans[p[i]],it);}
   		dfs(p[i],adj,vis,ans,b,vis2);
   		vis2[p[i]]=1;
   		mem(vis,0);
   	}
   	/*for(ll i=1;i<=n;i++)
   	{
   		cout<<b[i]<<" ";
   	}cout<<endl;*/
   	for(ll i=1;i<=n;i++)
   	{
   		if(ans[i]==2*n){cout<<-1<<" ";}
   		else{
   		cout<<ans[i]<<" ";}
   	}
   	cout<<endl;
   } 
}