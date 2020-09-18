//Tonight's the night and it is going to happen again and again.
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mp make_pair
#define pb push_back
#define T ll t; cin>>t; while(t--)
#define mod 1000000007
#define mem(name,val) memset(name,val,sizeof(name))
#define f(n) for(ll i = 0;i<n;i++)
#define endl "\n"
ll gcd(ll a,ll b){if(b==0){return a;}return gcd(b,a%b);}
struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        // http://xorshift.di.unimi.it/splitmix64.c
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }

    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};

int main()
{
   ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
   #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
   #endif
   int n,m;cin>>n>>m;int a[n];unordered_map<int, int, custom_hash>dis;
   queue<int>q;
   f(n)
   {
   	cin>>a[i];
   	dis[a[i]]=0;
   	q.push(a[i]);
   }
   ll ans=0;vector<int>v;
   while(!q.empty())
   {
   	if(v.size()==m){break;}
   	int x=q.front();q.pop();
   	if(dis[x]!=0)
   	{
     ans+=dis[x];
     v.pb(x);
   	}
   	if(!dis.count(x+1))
   	{
   		dis[x+1]=dis[x]+1;
   		q.push(x+1);
   	}

   	if(!dis.count(x-1))
   	{
   		dis[x-1]=dis[x]+1;
   		q.push(x-1);
   	}
   }
   cout<<ans<<endl;
   for(auto t:v){cout<<t<<" ";}
}