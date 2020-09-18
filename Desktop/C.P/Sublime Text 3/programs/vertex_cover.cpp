#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mp make_pair
#define pb push_back
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
   #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
   #endif
   int n;cin>>n;
   vector<int>adj[n+3];
   int vis[n+3]={0};
   for(int i=0;i<n-1;i++)
   {
   	cin>>a>>b;
   	adj[a].push_back(b);
   	adj[b].push_back(a);
   }   
}