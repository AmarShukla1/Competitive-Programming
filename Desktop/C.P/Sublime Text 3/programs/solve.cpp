//Tonight's the night and it is going to happen again and again.
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mp make_pair
#define pb push_back
int lower(int val,int n,int a[])
{
	int lo,hi,max1;
		lo=0;hi=n-1;max1=-1;//for no element less than 0.
   	while(lo<=hi)
   	{
   		int mid=lo+(hi-lo)/2;
   		if(a[mid]>val)
   		{
   			hi=mid-1;
   		}
   		else
   		{
   			lo=mid+1;//as equal or less this is right.
   			max1=max(max1,mid);
   		}

   	}
   	return max1;//index.
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
   int n,m;
   cin>>n>>m;int a[n];int b[m];
   for(int i=0;i<n;i++)
   {
   	cin>>a[i];
   }
   for(int i=0;i<m;i++)
   {
   	cin>>b[i];
   }
   sort(a,a+n);
   for(int i=0;i<m;i++)
   {
   	int max2=lower(b[i],n,a);
   	cout<<max2+1<<" ";

   }
   }