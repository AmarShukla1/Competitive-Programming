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
   int t1,n;cin>>t1;
   while(t1--)
   {
   	cin>>n;int a[n];int b[n];int ok1=0;int ok2=0;
   	for(int i=0;i<n;i++)
   	{
   		cin>>a[i];
   	}
   	for(int i=0;i<n;i++)
   	{
   		cin>>b[i];if(b[i]==0){ok1=1;}else{ok2=1;}
    }
    if(ok1==1&&ok2==1)
    {
    	cout<<"YeS\n";
    }
    else
    {
    	bool k=is_sorted(a,a+n);
    	if(k){cout<<"Yes\n";}
    	else{cout<<"No\n";}
    }
}
}