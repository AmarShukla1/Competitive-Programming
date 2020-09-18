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
   int t,n;
   cin>>t;
   while(t--)
   {
    cin>>n;
    vector<int>adj[n+1];
    for(int i=1;i<=n;i++)
    {
      cin>>m;
      for(int j=0;j<m;j++)
      {
      	cin>>k
      	adj[i].pb(k);
      }	
    }
    cin>>q;
    while(q--)
    {
    	cin>>v>>w;
    	
    }
   }  
}