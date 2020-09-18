//Tonight's the night and it is going to happen again and again.
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mp make_pair
#define pb push_back
#define T ll t; cin>>t; while(t--)
#define mod 1000000007
#define mem(name,val) memset(name,val,sizeof(name))
#define f(n) for(ll i = 0;i<n;i++)
#define endl "\n"
ll gcd(ll a,ll b){if(b==0){return a;}return gcd(b,a%b);}
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	//remove above line in interactive and do scanf/printf
	//or keep this line and do cout<<flush instead of fflush(stdout) this happens as I think
	//fflush(stdout) is used in c.We will now use cout<<flush
   int n,x1,x2,x3,x;cin>>n;int a[n];
   cout<<"? 1 2"<<endl;
   fflush(stdout);
   cin>>x1;
    cout<<"? 2 3"<<endl;fflush(stdout);
   cin>>x2;
    cout<<"? 1 3"<<endl;fflush(stdout);
   cin>>x3;
   a[2]=(x3+x2-x1)/2;a[0]=x3-a[2];
   a[1]=x1-a[0];
   for(int i=3;i<n;i++)
   {
   	cout<<"? "<<i<<" "<<i+1<<endl;fflush(stdout);
   	cin>>x;
   	a[i]=x-a[i-1];
   }
   cout<<"! ";
   f(n)
   {
   	cout<<a[i]<<" ";
   }
   fflush(stdout);
}