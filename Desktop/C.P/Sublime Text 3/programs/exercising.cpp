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
   T
   {
   	string s,c;cin>>s>>c;
   	if(s<c){cout<<s<<endl;}
   	else
   	{
   		for(int i=0;i<min(s.length(),c.length());i++)
   		{
   			char t2='Z';int ind=i;
   			if(s[i]>c[i]){
   			for(int j=i+1;j<s.length();j++)
   			{
   				
                if(s[j]<=c[i])//
                {

                	if(t2>=s[j]){t2=s[j];ind=j;}
                }
   			}
   			swap(s[i],s[ind]);goto sos;
   		    }
   		    else if(s[i]==c[i])
   		    {
   		    		for(int j=i+1;j<s.length();j++)
   			{
                if(s[j]<c[i])
                {
                	swap(s[i],s[j]);
                	goto sos;
                }
 
   			}
   		    }
   		    }
   		
   		sos:if(s<c){cout<<s<<endl;}else{cout<<"---"<<endl;}
   	}
   } 
}