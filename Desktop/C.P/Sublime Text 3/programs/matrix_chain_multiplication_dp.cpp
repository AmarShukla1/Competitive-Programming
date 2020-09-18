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
int dp[502][502];
int matrix(int a[],int i,int j)
{
	if(i==j){return 0;}
	if(dp[i][j]!=-1)
	{
		return dp[i][j];
	}
	int k,temp;
	int min1=INT_MAX;
	for(int k=i;k<j;k++)
	{
		temp=matrix(a,i,k)+matrix(a,k+1,j)+a[i-1]*a[k]*a[j];
		min1=min(temp,min1);
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
   int n,r,c;cin>>n;int a[n+1];
   mem(dp,-1);
   cin>>r>>c;a[0]=r;a[1]=c;
   for(int i=1;i<n;i++)
   {
   	cin>>r>>c;a[i+1]=c;
   }
   cout<<matrix(a,1,n); 
}