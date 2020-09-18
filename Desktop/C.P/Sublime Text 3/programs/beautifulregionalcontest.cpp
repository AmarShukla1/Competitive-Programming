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
    int n;
    cin>>n;int a[n];f(n){cin>>a[i];}double ind=0;
    for(int i=n/2-1;i>=0;i--){if(a[i]>a[n/2]){ind=i;break;}}//cout<<ind<<" ";
     if(ind<4){cout<<"0 0 0"<<endl;}
     else
     { 
      double max_g=ceil((ind+1)/3)-1;//cout<<max_g<<" ";
    int f=1;int w=1;
    for(int i=0;i<ind;i++)
    {
          if(a[i+1]==a[i]){f++;}
          else{break;}
    }
    for(int i=f;i<=ind;i++)
    {
      if(a[i]==a[i+1]||w<=f){w++;continue;}
      else{break;}
    }
     int h=ind-(w+f)+1;
     if(f>max_g||h==0||w==0||h<=f||w<=f||f==0){cout<<"0 0 0"<<endl;}
     else{cout<<f<<" "<<w<<" "<<h<<endl;}
    }
   } 
}