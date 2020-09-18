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
    ll a[4];int u=1;ll n;
  while(cin>>n)
{a[0]=n;
	for(int i=1;i<=3;i++){cin>>a[i];}
	sort(a,a+4);
	cout<<"Case "<<u++<<":"<<" "<<a[3]+a[2]<<"\n";
}

}