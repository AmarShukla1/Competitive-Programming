//Tonight's the night and it is going to happen again and again.
//this is same gcds question.
//ek bhari mistake ho gaya isme inclusion exclusion continuos nahi usme aur pair 
//bi le sakte hain fuck bahut pehle ho gaya hota ye question.Will try tommorrow
//update:finally after adding correct part of inclusion exclusion it got accepted.
//also we can merge two cases into one.
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mp make_pair
#define pb push_back
#define T ll t; cin>>t; while(t--)
#define mod 1000000007
#define f(n) for(ll i = 0;i<n;i++)
ll gcd(ll a,ll b){if(b==0){return a;}return gcd(b,a%b);}
ll a,m;
ll func(ll num)
{
	ll l1=a/num;ll r1=(a+m-1)/num;
	return (r1-l1);
}
int main()
{
   ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
   #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
   #endif
   T{
   	cin>>a>>m;ll p=0;
    ll res=gcd(a,m);vector<ll>v;vector<pair<ll,ll> >v1;ll m1=m;ll sum_main=0;
    if(res>1)
    {
      //its failing for gcd larger than res.how to combat that.like
      //take input 14,56.//now not failing
    ll l=a/res;ll r=(a+m-1)/res;
    ll x=(r-l);	
      ll res2=(m/res);ll c=0;
            for(ll i=2;i*i<=res2;i++)
      {
      	if(res2%i==0)
      	{
      		c=0;
      		while(res2%i==0)
      		{
      			res2=res2/i;
                c++;
      		}
      		v1.pb({i,c});
      	}
      }
      if(res2!=1){v1.pb({res2,1});}
     if(v1.size()>1||(v1.size()==1&&v1[0].second>1))
     {
      	ll n=v1.size();
         for (ll msk=1; msk<(1<<n); ++msk)
           {
        ll num = 1;
            ll bits = 0;
        for (ll i=0; i<n; ++i)
            {if (msk & (1<<i)) {
                ++bits;
                num*= v1[i].first;
                    }
            }
            num*=res;
        ll cur=func(num);
        if (bits % 2 == 1)
            sum_main+= cur;
        else
            sum_main-= cur;
      		//cout<<num<<" "<<sum<<endl;
      	}

      cout<<x-sum_main+1<<endl; 
     }
     else
     {
     	cout<<x<<endl;
     }
    }
    else
    {//case when gcd is 1
      for(ll i=2;i*i<=m1;i++)
      {
      	if(m1%i==0)
      	{
      		while(m1%i==0)
      		{
      			m1=m1/i;

      		}
      		v.pb(i);
      	}
      }
      if(m1!=1){v.pb(m1);}ll n=v.size();
      //inclusion-exclusion starts
      //removing elements which have some divisor in them of m.
          for (ll msk=1; msk<(1<<n); ++msk)
           {
        ll num = 1;
            ll bits = 0;
        for (ll i=0; i<n; ++i)
            {if (msk & (1<<i)) {
                ++bits;
                num *= v[i];
                    }
            }
        ll cur=func(num);
        cout<<num<<endl;
        if (bits % 2 == 1)
            sum_main+= cur;
        else
            sum_main-= cur;
      		//cout<<num<<" "<<sum<<endl;
      	}
      cout<<m-sum_main<<endl;
      }//main sums;
    }
   } 
