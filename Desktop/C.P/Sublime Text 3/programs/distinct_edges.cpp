//Tonight's the night and it is going to happen again and again.
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mp make_pair
#define pb push_back
#define endl "\n"
vector<ll>v;ll a,b;
void solver(ll a)
{
	v.pb(a);
	if (a==b){
		cout<<"YES"<<endl<<v.size()<<endl;
		for(auto t:v){cout<<t<<" ";
	     }exit(0);
		}
		if(a<b){
    solver(a*2);
    solver(a*10+1);
}
    v.pop_back();
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
 cin>>a>>b;
 solver(a);cout<<"NO";
}