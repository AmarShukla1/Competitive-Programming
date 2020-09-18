//Tonight's the night and it is going to happen again and again.
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mp make_pair
#define pb push_back
#define endl "\n"
unordered_map<int,int>m1;
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
   #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
   #endif
int n,m,l;
cin>>n>>m;int a[n+1];int dp[n+];memset(dp,0,sizeof(dp));set<int>s;
for(int i=1;i<=n;i++)
{
	cin>>a[i];
	m1[a[i]]++;s.insert(a[i]);
}
 dp[1]=s.size();
  for(int i=1;i<=n;i++)
  {
  	m1[a[i]]--;
     if(m1[a[i]]==0)
     {
     	dp[i+1]=dp[i]-1;
     }
     else
     {
     	dp[i+1]=dp[i];
     }
  }
  //for(int i=1;i<=n;i++){cout<<dp[i]<<" ";}cout<<endl;
 	for(int i=0;i<m;i++)
 	{
 		cin>>l;
 		cout<<dp[l]<<endl;
 	}
   
 }   
