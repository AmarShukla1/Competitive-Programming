//Tonight's the night and it is going to happen again and again.
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mp make_pair
#define pb push_back
#define endl "\n"
#define mod 1000000007
char a[1010][1010];
int dp[1010][1010];int h,w;
int ways(int h1,int w1)
{
	if(a[h1][w1]=='#'){return 0;}
	if(h1>h||w1>w){return 0;}
	if(dp[h1][w1]!=-1){return dp[h1][w1];}
	if(h1==h&&w1==w)
	{
		return 1;
	}
	if(a[h1-1][w1]=='#'&&a[h1][w1-1]=='#'){return 0;}
    return dp[h1][w1]=(ways(h1+1,w1)+ways(h1,w1+1))%mod;
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
 cin>>h>>w;
 for(int i=1;i<h+1;i++)
 {
 	for(int j=1;j<w+1;j++)
 	{
 		cin>>a[i][j];dp[i][j]=-1;
 	}
 }
int k=ways(1,1);
cout<<k<<endl;
/*for(int i=1;i<h+1;i++)
 {
 	for(int j=1;j<w+1;j++)
 	{
 		cout<<dp[i][j]<<" ";
 	}cout<<endl;
 }*/
}