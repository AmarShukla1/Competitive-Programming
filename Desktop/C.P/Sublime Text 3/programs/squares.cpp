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
 	int a=sqrt(n)+1;
 	for(int i=1;i<=a;i++)
 	{
 		ll k=n-i*i;
 		if(k<0){cout<<"No\n";break;}
 		double d=sqrt(k);
 		int j=d;
 		if(j!=d){continue;}
 		if(j==d){cout<<"Yes\n";break;}
 	}
 }
}