//binary search can be applied to monotonic functions.
//[t,t,t,t,t,t,f,f,f,f,f]or[f,f,f,f,f,t,t,t,t]
//or in mathematical situations.
//in this problem [t,t,t,t,t,f,f,f,f] is there.
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mp make_pair
#define pb push_back
int n;
int check(int a[],int dis)
{
	int w=0;int count=1;
	for(int i=1;i<n;i++)
	{
		if(a[i]-a[w]>=dis)
		{
          w=i;
          count++;
		}
	}
	return count;
}
int bin(int a[],int lo,int hi,int c)
{
	int y;int t1=0;
	while(lo<=hi)
	{
		int mid=lo+(hi-lo)/2;//distance
		y=check(a,mid);//to check if the cows can be placed
		//in that distance.Meaning mid is the distance.	
		if(y>=c)
		{
         t1=max(t1,mid);//for maximum distance jiske liye true hai.
         lo=mid+1;
		}
		if(y<c)
		{
         hi=mid-1;
		}
	}
	return t1;
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
  int t,c;
  cin>>t;
  while(t--)
  	{
  		cin>>n>>c;
  		int a[n];
  		for(int i=0;i<n;i++)
  		{
  			cin>>a[i];
  		}
  		sort(a,a+n);
  		cout<<bin(a,a[0],a[n-1],c)<<"\n";
  	}

}