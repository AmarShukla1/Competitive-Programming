//Tonight's the night and it is going to happen again and again.
//unordered_map is slower than array for lookups.So when small value is there use array
//otherwise unor.._map.
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mp make_pair
#define pb push_back
ll block=800;ll ans;ll m[1000001];ll answer[200005];
struct test
{
  ll l,r,idx;
};
bool comp(test i1,test i2)
{
	if(i1.l/block!=i2.l/block)
	{
		return i1.l/block<i2.l/block;
	}
	return (i1.l/block & 1) ? (i1.r < i2.r) : (i1.r>i2.r);
}
void add(ll pos,ll a[])
{
  m[a[pos]]++;
  ans+=((2*m[a[pos]]-1)*a[pos]);
}
void remove(ll pos,ll a[])
{
	if(m[a[pos]]>0)
	{
		  ans-=((2*m[a[pos]]-1)*a[pos]);
		  m[a[pos]]--;
	}
}
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
   #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
   #endif
  ll n,q;cin>>n>>q;ll a[n];
  for(ll i=0;i<n;i++)
  {
  	cin>>a[i];
  }
  test v[q];
  for(ll i=0;i<q;i++)
  {
  	cin>>v[i].l>>v[i].r;
  	v[i].l--;v[i].r--;v[i].idx=i;  	
  }
  sort(v,v+q,comp);
  ll curl=0,curr=-1;
  for(ll i=0;i<q;i++)
  {
  	ll L=v[i].l;ll R=v[i].r;
    while(curl>L)
    {
    	curl--;
    	add(curl,a);
    }
    while(curr<R)
    {
    	curr++;
    	add(curr,a);
    }
    while(curl<L){remove(curl,a);curl++;}
    while(curr>R){remove(curr,a);curr--;}
    answer[v[i].idx]=ans;
  }
for(ll i=0;i<q;i++){cout<<answer[i]<<"\n";}
}