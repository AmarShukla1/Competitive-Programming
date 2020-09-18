//Tonight's the night and it is going to happen again and again.
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
    int n;cin>>n;
    string s[n];
    for(int i=0;i<n;i++)
    {
    	cin>>s[i];
    }
    ll sum=0;ll min1=10000000000;
    for(int i=0;i<n;i++)
    {
    	for(int j=0;j<n;j++)
    	{
            int n1=((s[j]+s[j]).find(s[i]));//this was good.
            //to find the cyclic shift.
            if(n1==string::npos)//string::npos is used when a function return last in a range
            {
              cout<<-1;exit(0);
            }
            else{sum+=n1;}
    	}
    	min1=min(sum,min1);
    	sum=0;
    }
   cout<<min1;
}