#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct seg
{
  ll a3,b3;
};
seg st[400009];
void build(ll si,ll ss,ll se,ll a[])
{
	if(se==ss)
	{
		st[si].a3=a[ss];
		st[si].b3=0;
	}
	else
	{
		ll mid=(ss+se)/2;
		build(2*si,ss,mid,a);
		build(2*si+1,mid+1,se,a);
        ll w[4]={st[2*si].a3,st[2*si].b3,st[2*si+1].a3,st[2*si+1].b3};
        sort(w,w+4,greater<ll>());
        st[si].a3=w[0];
        st[si].b3=w[1];
	}
}
vector<ll> query(ll si,ll ss,ll se,ll l,ll r)
{
   if(l>se||r<ss){vector<ll>v3;v3.push_back(-1);v3.push_back(-1);return v3;}
   else if(l<=ss&&se<=r){vector<ll>v;v.push_back(st[si].a3);v.push_back(st[si].b3);return v;}
   else{
   ll mid=(ss+se)/2;
   vector<ll>v1,v2;
   v1=query(2*si,ss,mid,l,r);
   v2=query(2*si+1,mid+1,se,l,r);
   sort(v2.begin(),v2.end(),greater<ll>());//yahan par isliye sort karna pada bcoz
   //v2 me recursion se push back ho rhe isliye maximum elements ko pane ke liye karna pada.
   v1.push_back(v2[0]);v1.push_back(v2[1]);
   return v1;
      }
}
void update(ll si,ll ss,ll se,ll ind,ll a[])
{
    if(ss==se)
    {
       	st[si].a3=a[ss];
       	return;
    }
    else
    {
    	ll mid=(ss+se)/2;
    	if(ind<=mid)
    	{
    		update(2*si,ss,mid,ind,a);
    	}
    	else{
    		update(2*si+1,mid+1,se,ind,a);
    	}
        ll w1[4]={st[2*si].a3,st[2*si].b3,st[2*si+1].a3,st[2*si+1].b3};
        sort(w1,w1+4,greater<ll>());
        st[si].a3=w1[0];
        st[si].b3=w1[1];	
    }
}
int  main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll n,q;
    cin>>n;
    ll a[n+1];
    for(ll i=1;i<=n;i++)
    {
    	cin>>a[i];
    }
    cin>>q;
    build(1,1,n,a);
    char l;ll a1,b;
    while(q--)
    {
      cin>>l>>a1>>b;
      if(l=='Q')
      {
      	vector<ll>ans;
      	ans=query(1,1,n,a1,b);
      	sort(ans.begin(),ans.end(),greater<ll>());
      	cout<<ans[0]+ans[1]<<"\n";
      }
      else
      {
      	a[a1]=b;
      	update(1,1,n,a1,a);
      }
    }
}