//Tonight's the night and it is going to happen again and again.
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mp make_pair
#define pb push_back
#define T ll t; cin>>t; while(t--)
#define mod 1000000007
#define inf 1000000000000000000
#define mem(name,val) memset(name,val,sizeof(name))
#define f(n) for(ll i=0;i<n;i++)
#define rep(i,a,n) for(ll i=a;i<n;i++)
ll gcd(ll a,ll b){if(b==0){return a;}return gcd(b,a%b);}
ll convert(string s,ll len)
{
	ll w=0;ll sum1=0;
	for(ll i=len-1;i>=0;i--)
	{
		sum1+=((s[i]-'0')*pow(2,w));
		w++;
	}
	return sum1;
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
   	ll n,sum;cin>>n;string s;
   	cout<<1<<" "<<1048576<<endl;
   	cin>>sum;sum-=(1048576*n);
   	ll count1,count2,curr_sum=0;
   	ll x;
   	vector<int>v(25);f(25){v[i]=0;}//no of ones 
    for(ll i=19;i>=1;i--)
    {
      ll k=pow(2,i);
      cout<<1<<" "<<k<<endl;
      cin>>x;
      x-=sum;
      count1=x/k;//cout<<count1<<endl;
      if(count1==0){v[i]=n/2;if((n/2)&1){s+="1";}else{s+="0";}}
      else if(count1>0)
      {
      	
        count2=(n-count1)/2;
        v[i]=count2;
        if(count2&1){s+="1";}
        else{s+="0";}
      }
      else
      {
         count2=(n-abs(count1))/2;
         count2=n-count2;
         v[i]=count2;
         if(count2&1){s+="1";}
         else{s+="0";}  
      }
      curr_sum+=(k*v[i]);	
    }
    if(curr_sum<sum)
    {
    	 sum-=curr_sum;
    	 if(sum&1)
    	 {	
          s+="1";
         }
        else{s+="0";}
    }
    else{s+="0";}
    //cout<<s<<endl; 
    ll len=s.length();
    ll res=convert(s,len);
    cout<<2<<" "<<res<<endl;
    cin>>x;if(x==1){continue;}else{break;}
   } 
}