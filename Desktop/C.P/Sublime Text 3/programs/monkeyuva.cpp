//this is [f,f,f,f,f,t,t,t,t,t] type
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mp make_pair
#define pb push_back
int n;
bool check(int a[],int k)
{
	if(a[0]==k){k--;}//bcoz of this condition i was missing.
    for(int i=1;i<n;i++)
    {
    	if(a[i]-a[i-1]>k)
    	{
    		return false;
    	}
    	if(a[i]-a[i-1]==k)
    	{
    		k--;
    	}

    }
    return true;
}
int bin(int a[],int lo,int hi)
{
	int t1=100000000;
	while(lo<=hi)
	{
		int mid=lo+(hi-lo)/2;
		if(check(a,mid))
		{
			t1=min(t1,mid);
			hi=mid-1;
		}
		else
		{
			lo=mid+1;
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
 int t;
 cin>>t;int u=1;
 while(t--)
 {
 	cin>>n;
 	int a[n];
 	for(int i=0;i<n;i++)
 	{
 		cin>>a[i];
 	}
 	int j;
 	
 	j=bin(a,a[0],a[n-1]);
 	cout<<"Case "<<u++<<": "<<j<<'\n';
 }  
}