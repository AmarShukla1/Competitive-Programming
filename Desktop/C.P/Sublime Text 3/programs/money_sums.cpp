//Tonight's the night and it is going to happen again and again.
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
int dp[100001];
int main()
{
   ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
   #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
   #endif 
    int n;cin>>n;int a[n];vector<int>v;
    f(n){cin>>a[i];dp[a[i]]=1;}
    for(int i=1;i<=10000;i++)
    {
    	for(int j=0;j<n;j++)
    	{
    		if(i>a[j])
    		{
    			if(dp[i-a[j]]==1)
    			{
    				dp[i]=1;v.push_back(i);break;
    			}
    		}
    	}

    }
cout<<v.size()<<endl;
for(auto t:v){cout<<t<<" ";}
}