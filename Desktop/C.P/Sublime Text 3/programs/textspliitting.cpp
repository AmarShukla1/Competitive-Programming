//Tonight's the night and it is going to happen again and again.
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mp make_pair
#define pb push_back
#define endl "\n"
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
   #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
   #endif
 double n,p,q;cin>>n>>p>>q;
 string s;cin>>s;
 //px+qy=n;MAKING THIS QUESTION AS DIOPHANTINE EQUATION.
 double y;int j;
 if(p>=q){
 for(double i=0;i<=int(n/p);i++)
 {
   y=(n-p*i)/q;
   if(y==int(y)){j=i;break;}
 }
 int i=0;
 if(y==int(y))
 {
 	cout<<y+j<<endl;int y1=y;
 while(y--){
 	cout<<s.substr(i,q)<<endl;i+=q;
 }
while(j--)
{
	cout<<s.substr(i,p)<<endl;i+=p;
}
}
else
{
	cout<<-1;
} 
 }
 else
 {
 	for(int i=0;i<=int(n/q);i++)
 {
 	 y=(n-q*i)/p;
   if(y==int(y)){j=i;break;}
 }
 if(y==int(y))
 {
 	cout<<y+j<<endl;
 int i=0;int y1=y;
 while(y--)
 {
 	cout<<s.substr(i,p)<<endl;i+=p;
 }
while(j--)
{
	cout<<s.substr(i,q)<<endl;i+=q;
}
}
else
{
	cout<<-1;
}   
}
}