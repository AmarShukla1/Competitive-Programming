//Tonight's the night and it is going to happen again and again.
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mp make_pair
#define pb push_back
#define T ll t; cin>>t; while(t--)
#define mod 1000000007
#define f(n) for(ll i = 0;i<n;i++)
ll gcd(ll a,ll b){if(b==0){return a;}return gcd(b,a%b);}
int main()
{
   ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
   #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
   #endif
   string s;cin>>s;ll upper=0,lower=0;
   for(ll i=s.length();i>=0;i--)
   {
      if(s[i]>=97){upper++;}
   }
   ll n=s.length();//cout<<upper<<endl;//cout<<n<<endl;
   ll dp[n];
   ll y=upper;
   for(ll i=n-1;i>=0;i--)
   {
   	if(s[i]<97)
   	{
   		lower++;
   	}
   	else{upper--;}
   	dp[i]=lower+(upper);
   }
   ll min1=1000000000000;
   for(ll i=0;i<n;i++)
   {
   	if(min1>dp[i])
   	{
   		min1=dp[i];
   	}
   	
   }
   cout<<min(min1,y);
}



