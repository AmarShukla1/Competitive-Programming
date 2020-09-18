//Tonight's the night and it is going to happen again and again.
//edit distance bottom up and memoized
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mp make_pair
#define pb push_back
#define T ll t; cin>>t; while(t--)
#define mod 1000000007
#define f(n) for(ll i = 0;i<n;i++)
#define endl "\n"
ll gcd(ll a,ll b){if(b==0){return a;}return gcd(b,a%b);}
string s1,s2;int dp[5002][5002];
int editdistance(int m,int n)
{
  if(dp[m][n]!=0){return dp[m][n];}
	if(m==0){return n;}if(n==0){return m;}
	if(s1[m-1]==s2[n-1])
	{
		return dp[m][n]=editdistance(m-1,n-1);
	}
	else{return dp[m][n]=1+min(editdistance(m-1,n),min(editdistance(m,n-1),editdistance(m-1,n-1)));}
}
int main()
{
   ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
   //
   cin>>s1>>s2;int m=s1.length();int n=s2.length();
   for(int i=0;i<=m;i++)
   {
    for(int j=0;j<=n;j++)
    {
      if(i==0){dp[i][j]=j;}else if(j==0){dp[i][j]=i;}
      else if(s1[i-1]==s2[j-1])
      {
        dp[i][j]=dp[i-1][j-1];
      }
      else
      {
        dp[i][j]=1+min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1]));
      }
    }
   }
   cout<<dp[m][n]; 
}