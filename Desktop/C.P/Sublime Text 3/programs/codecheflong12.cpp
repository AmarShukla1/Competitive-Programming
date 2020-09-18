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
int main()
{
   ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
   #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
   #endif
   T{
   	int n;cin>>n;string s[n];int count[n][2];mem(count,0);
   	f(n){cin>>s[i];}vector<int>v;
   	f(n)
   	{
   		for(int j=0;j<s.length();j++)
   		{
   			if(s[i][j]=='0'){count[i][0]++;}
   			else{count[i][1]++;}
   		}
   	}
   	f(n)
   	{
   		int n=s.length();int c=0;
   		for(int j=0;j<n/2;j++)
   		{
          if(s[i][j]!=s[i][n-j-1]){c++;}
   		}
   		v.pb(c);
   	}
   	
   } 
}