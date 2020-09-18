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
ll w=1;
ll st[800000];
void dfs(ll s,int vis[],vector<int>adj[],ll nodevalue[],int node_id[],int subtree[],ll a1[])
{
	node_id[w]=s;
	nodevalue[w]=a1[s];
	w++;
	subtree[s]=1;
	vis[s]=1;
	for(auto x:adj[s])
	{
		if(vis[x]==0)
		{
			dfs(x,vis,adj,nodevalue,node_id,subtree,a1);
			subtree[s]+=subtree[x];
		}
	}
}
void build(ll si,ll ss,ll se,ll nodevalue[])
{
	if(se==ss)
	{
		st[si]=nodevalue[ss];
	}
	else
	{
		ll mid=(ss+se)/2;
		build(2*si,ss,mid,nodevalue);
		build(2*si+1,mid+1,se,nodevalue);
		st[si]=st[2*si]+st[2*si+1];
	}
}
ll query(ll si,ll ss,ll se,ll l,ll r)
{
  if(l>se||r<ss){return 0;}
  if(l<=ss&&se<=r){return st[si];}
  ll mid=(se+ss)/2;
  ll l1=query(2*si,ss,mid,l,r);ll r1=query(2*si+1,mid+1,se,l,r);
  return l1+r1;
}
void update(ll si,ll ss,ll se,ll pos,ll nodevalue[])
{
	if(ss==se)
	{
		st[si]=nodevalue[pos];
		return;
	}
	else
	{
		ll mid=(ss+se)/2;
		if(pos<=mid){update(2*si,ss,mid,pos,nodevalue);}
		else{update(2*si+1,mid+1,se,pos,nodevalue);}
		st[si]=st[2*si]+st[2*si+1];
	}
}
int main()
{
   ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
        #ifndef ONLINE_JUDGE
         freopen("input.txt", "r", stdin);
         freopen("output.txt", "w", stdout);
        #endif 
   ll n,q,a,b;
   cin>>n>>q;
   ll a1[n+4];int  node_id[n+4];ll nodevalue[n+4];int subtree[n+4];
   memset(subtree,0,sizeof(subtree));
   for(ll i=1;i<=n;i++){cin>>a1[i];}
   int vis[n+4];memset(vis,0,sizeof(vis));
   vector<int>adj[n+4];ll x,s;
   f(n-1){cin>>a>>b;adj[a].pb(b);adj[b].pb(a);}
   dfs(1,vis,adj,nodevalue,node_id,subtree,a1);ll index[n+4];
   for(ll i=1;i<=n;i++){index[node_id[i]]=i;}
   //nodeid,nodevalue,subtree full.
   build(1,1,n,nodevalue);
//for(int i=1;i<=n;i++){cout<<nodevalue[i]<<" ";}cout<<endl;
	//for(int i=1;i<=n;i++){cout<<index[i]<<" ";}cout<<endl;
//for(int i=1;i<=4*n;i++){cout<<st[i]<<" ";}cout<<endl;
   while(q--)
   {
   	cin>>x;
   	if(x==1)
   	{
   		cin>>s>>x;
   		nodevalue[index[s]]=x;
        update(1,1,n,index[s],nodevalue);
   	}
   	else
   	{
   		cin>>s;
   		ll r=index[s]+subtree[s]-1;//cout<<index[s]<<" "<<r<<endl;
   		cout<<query(1,1,n,index[s],r)<<endl;
   	}
   } 
}