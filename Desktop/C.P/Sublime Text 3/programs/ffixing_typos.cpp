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
   string s;cin>>s;int n=s.length();
   for(int i=0;i<n-2;i++)
   {
     if(s[i]==s[i+1]&&s[i]==s[i+2])
     {
     	s.erase(s.begin()+i+2);i--;n--;
     }
   }
   n=s.length();
   for(int i=0;i<n-3;i++)
   {
     if(s[i]==s[i+1]&&s[i+2]==s[i+3])
     {
     	s.erase(s.begin()+i+3);i--;n--;//erasing the last element so that after koi jhantupana na ho
     }
   }
   n=s.length();
   if(n>=4){//important
   if(s[n-4]==s[n-3]&&s[n-2]==s[n-1])
   {
   	s.erase(s.begin()+n-1);
   }
}
   cout<<s; 
}