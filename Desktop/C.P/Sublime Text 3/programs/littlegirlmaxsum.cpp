//Tonight's the night and it is going to happen again and again.
//little girl and max sum
//use of differene array.
//it updates a range in O(1)
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
struct test
{
	ll a,b;
};
bool comp(test i1,test i2)
{
	return i1.a>i2.a;
}
int main()
{
   ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
   #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
   #endif
    //difference array then sort the diff array and then put largest element in that index and 
    //then prefix sum.total the sum.
   ll n,q;
   cin>>n>>q;ll l,r;ll a[n];test b[q];ll diff[n+1];test count[n];mem(diff,0);
   f(n){cin>>a[i];}sort(a,a+n,greater<ll>());
   f(q){cin>>l>>r;diff[l-1]+=1;diff[r]-=1;b[i].a=l;b[i].b=r;}
   for(ll i=0;i<n;i++)
   {count[i].b=i;
   	if(i==0){count[i].a=diff[i];}
   	else
   	{
   		count[i].a=diff[i]+count[i-1].a;
   	}
   }

  sort(count,count+n,comp);//putting greatest element on the index which has max count
  ll sum[n];
  for(ll i=0;i<n;i++)
  {
  	sum[count[i].b]=a[i];
  }
   ll pref_sum[n+1];pref_sum[0]=0;
   //pref_sum array
   for(ll i=1;i<=n;i++)
   {
   	pref_sum[i]=sum[i-1]+pref_sum[i-1];
   }
   ll sum_main=0;
   //summing up
   for(ll i=0;i<q;i++)
   {
   	 ll l=b[i].a;ll r=b[i].b;
   	 sum_main+=pref_sum[r]-pref_sum[l-1];
   }
   cout<<sum_main;
  }
