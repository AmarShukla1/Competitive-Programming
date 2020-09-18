#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mp make_pair
#define pb push_back
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
   #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
   #endif
   int t,n;
   cin>>t;
   while(t--)
   {
   	cin>>n;int a[n];
   	for(int i=0;i<n;i++)
   	{
   		cin>>a[i];
   	}
   	int t=-1;
   	for(int i=n-2;i>=0;i--)
   	{
   		if(a[i]>=a[i+1])
   		{
   			continue;
   		}
   		else
   		{
   			t=i;break;
   		}
   	}
   	if(t==-1)
   	{
     cout<<-1<<"\n";
   	}
   	else{
   		int min1=16;int ind=0;
   		for(int i=t+1;i<n;i++)
   		{
          if(a[i]>a[t]){min1=min(min1,a[i]);ind=i;}
   		}
        a[ind]=a[t];
        a[t]=min1;
        sort(a+t+1,a+n);//using to_string() gave tle here.
        //means it is beneficial to do the char conversion when needed.
        for(int i=0;i<t;i++)
        {
        	cout<<a[i];
        }
        cout<<a[t];
   		for(int i=t+1;i<n;i++){cout<<a[i];}
   		cout<<"\n";
   	}
   }
}