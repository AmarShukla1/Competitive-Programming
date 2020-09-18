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
    int t,n;cin>>t;
    while(t--)
    {
    	cin>>n;
    	int a[n];
    	int b[n];map<int,int>m;int c=0;
    	for(int i=0;i<n;i++)
    	{
    		cin>>a[i];
    	}
    	for(int i=0;i<n;i++){cin>>b[i];}
    		if(a[0]!=b[0]){cout<<"NO\n";continue;}m[a[0]]=1;
    		for(int i=1;i<n;i++)
    		{  
    			if(a[i]==b[i]){m[a[i]]=1;continue;}
    			else
    			{
                  if(b[i]>a[i]&&m[1]==1){m[a[i]]=1;continue;}
                  if(b[i]<a[i]&&m[-1]==1){m[a[i]]=1;continue;}
                  else{c=1;break;}

    			}
    			 m[a[i]]=1;
    		}
    		if(c==1){cout<<"NO\n";}
    		else
    		{
    		cout<<"YES\n";	
    		}
    }
}