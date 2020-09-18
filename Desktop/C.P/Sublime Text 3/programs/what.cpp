//Tonight's the night and it is going to happen again and again.
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
  int n,m;cin>>n>>m; string s[n+1];int a[m];
  for(int i=1;i<=n;i++)
  {
  	cin>>s[i];
  }
  int vism[109]={0};
  for(int i=0;i<m;i++)
  {
  	cin>>a[i];vism[a[i]]=1;
  }
  vector<int>v;
  for(int i=1;<=n;i++)
  {
    if(vism[i]==0){v.push_back(i);}
  }
  int d=s[a[0]].length();
  for(int i=1;i<m;i++){
  	if(s[a[i]].length()!=d)
  	{
  		cout<<"No";
  		exit(0);
  	}
  }
  int vis[109];memset(vis,0,sizeof(vis));
  
  for(int i=0;i<m-1;i++)
  {
  	for(int j=0;j<d;j++)
  	{
      if(s[a[i]][j]!=s[a[i+1]][j])
      {
      	vis[j]=1;
      }
  	}
  }

  string r;int c=0;
  for(int i=0;i<d;i++)
  {
  	if(vis[i]==0){r+=s[a[0]][i];}
  	else{r+="?";c++;}
  }
  if(c!=d||d==1){cout<<"Yes\n";cout<<r;exit(0);}
  else if(c==d){cout<<"No";}
}