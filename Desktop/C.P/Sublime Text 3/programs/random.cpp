#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mp make_pair
#define pb push_back
int  main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 
   ll t;cin>>t;
   ll a,b,c,k;
   while(t--)
   {
   	cin>>a>>b>>c>>k;
   	ll lo=0;
   	ll hi=min(k,1000000ll);
   	ll t1=10000000000;
   	while(lo<=hi)
   	{

   		ll mid=lo+(hi-lo)/2;//mid is x0.
   		ll p=a*mid*mid+b*mid+c;
   		if(p>=k)
   		{
   			t1=min(t1,mid);
   			hi=mid-1;
   		}
   		else
   		{
   			lo=mid+1;
   		}
   	}
   	cout<<t1<<"\n";
   }
}