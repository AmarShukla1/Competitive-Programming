//Tonight's the night and it is going to happen again and again.
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mp make_pair
#define pb push_back
#define T ll t; cin>>t; while(t--)
#define mod 1000000007
#define f(n) for(ll i = 0;i<n;i++)
#define endl "\n"
ll INF=1000000000;
ll gcd(ll a,ll b){if(b==0){return a;}return gcd(b,a%b);}
vector<ll>euler;
vector<ll>st;vector<ll>levelnew;
void build(ll si,ll ss,ll se)
{
	if(ss==se)
	{
		st[si]=levelnew[ss-1];
	}
	else
	{
		ll mid=(ss+se)/2;
		build(2*si,ss,mid);
		build(2*si+1,mid+1,se);
		st[si]=min(st[2*si+1],st[2*si]);
	}
}
ll query(ll si,ll ss,ll se,ll l,ll r)
{
	if(l>se||r<ss){return INF;}
	if(l<=ss&&se<=r){return st[si];}
    ll mid=(ss+se)/2;
    ll l1=query(2*si,ss,mid,l,r);
    ll r1=query(2*si+1,mid+1,se,l,r);
    return min(l1,r1);
}
void dfs(ll s,vector<ll>adj[],ll level[],ll vis[],ll index[])
{
	vis[s]=1;
	euler.pb(s);
	index[s]=euler.size();
	for(auto x:adj[s])
	{
		if(vis[x]==0)
		{
			level[x]=level[s]+1;
			dfs(x,adj,level,vis,index);
			euler.pb(s);
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
   ll n,q,a,b;cin>>n>>q;ll vis[n+1];
   memset(vis,0,sizeof(vis));vector<ll>adj[n+1];ll level[n+1];
   memset(level,0,sizeof(level));ll index[n+1];
   level[1]=1;
   f(n-1){cin>>a>>b;adj[a].pb(b);adj[b].pb(a);}
   dfs(1,adj,level,vis,index);
   //for(auto t:euler){cout<<t<<" ";}cout<<endl;

   	//for(ll i=1;i<=n;i++){cout<<index[i]<<" ";}cout<<endl;
   		//for(ll i=1;i<=n;i++){cout<<level[i]<<" ";}cout<<endl;
   	st.resize(4*euler.size());
   	for(int i=0;i<euler.size();i++){levelnew.pb(level[euler[i]]);}   	
   		//for(auto t:levelnew){cout<<t<<" ";}cout<<endl;
   build(1,1,euler.size());ll l,r;
   //for(ll i=1;i<4*euler.size();i++){cout<<st[i]<<" ";}cout<<endl;	
   while(q--)
   {
   	cin>>l>>r;
   	ll v1=index[l];ll v2=index[r];//cout<<v1<<" "<<v2<<endl;
   	if(v1<=v2){
   	cout<<level[l]+level[r]-query(1,1,euler.size(),v1,v2)*2<<endl;}
   	else{
   	cout<<level[l]+level[r]-query(1,1,euler.size(),v2,v1)*2<<endl;}
   } 
}