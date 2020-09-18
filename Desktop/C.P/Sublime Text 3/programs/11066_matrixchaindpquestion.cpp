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
int dp[503][503];
ll gcd(ll a,ll b){if(b==0){return a;}return gcd(b,a%b);}
int solve(int sum[],int i,int j)
{
	if(i==j){return 0;}
	if(dp[i][j]!=-1){return dp[i][j];}
	int k,min1=INT_MAX,temp;
	for(int k=i;k<j;k++)
	{

		temp=solve(sum,i,k)+solve(sum,k+1,j)+sum[j]-sum[i-1];
		min1=min(min1,temp);
	}
	return dp[i][j]=min1;
}
int main()
{
   ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
   #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
   #endif
   T
   {
   	mem(dp,-1);
   	int n;cin>>n;int a[n+1];
   	for(int i=1;i<=n;i++){cin>>a[i];}
   	int sum[n+1];mem(sum,0);
   	sum[1]=a[1];
   	for(int i=2;i<=n;i++)
   	{
   		sum[i]=sum[i-1]+a[i];
   	}
   	cout<<solve(sum,1,n)<<endl;
   } 
}