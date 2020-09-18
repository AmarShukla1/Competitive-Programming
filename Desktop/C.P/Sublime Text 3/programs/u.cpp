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
     bool b=is_sorted(a,a+5,greater<int>());
	 if(b){cout<<-1<<"\n";}
	 else{
        next_permutation(a,a+n);
        for(int i=0;i<n;i++)
        {
        	cout<<a[i];
        }
        cout<<"\n";
    }
    }
}