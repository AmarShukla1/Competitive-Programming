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
int m[100050];int vis[100050];
int main()
{
   ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
   #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
   #endif
   
   	int n;cin>>n;
   	int a[n];
   	for(int i=0;i<n;i++){cin>>a[i];m[a[i]]++;}
   		int c=0,d=0,e=0;
   	for(int i=0;i<n;i++){
   		if(vis[a[i]]==0){
   			vis[a[i]]=1;
   		if(m[a[i]]>=4){c++;if(e>0){e--;}}
   		else if(m[a[i]]>=6){d++;if(c>0){c--;}}
   		else if(m[a[i]]>=2){e++;}
   	}
   	}//cout<<c<<" "<<d<<" "<<e<<endl;
    int g,l;char ch;cin>>g;
    for(int i=0;i<g;i++)
    {
    	cin>>ch>>l;
    	if(ch=='+')
    		{
    		m[l]++;
   		    if(m[l]==4){c++;if(e>0){e--;}}
   		    if(m[l]==6){d++;if(c>0){c--;}}
   		    if(m[l]==2){e++;}
          //cout<<c<<" "<<d<<" "<<e<<endl;
   		   if(c>=2||e>=4||(d>=1&&e>=1)){cout<<"YES"<<endl;}
   		   else{cout<<"NO"<<endl;}

    	    }
    	else{
    		m[l]--;
   		if(m[l]==3){c--;e++;}
   		if(m[l]==5){d--;c++;}
   		 if(m[l]==1){e--;}
       //cout<<c<<" "<<d<<" "<<e<<endl;
   		 if(c>=2||e>=4||(d>=1&&e>=1)){cout<<"YES"<<endl;}
   		  else{cout<<"NO"<<endl;}
    	}
    }
   } 
