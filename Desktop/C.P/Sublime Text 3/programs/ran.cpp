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
   int n,k1,k2,a;
   cin>>n;
   cin>>k1;
   queue<int>q1,q2;
   for(int i=0;i<k1;i++)
   {
     cin>>a;
     q1.push(a);
   }
   cin>>k2;
   for(int i=0;i<k2;i++)
   {
     cin>>a;
     q2.push(a);
   }
   int c=0;
   while(!q1.empty()&&(!q2.empty()))
   {
     if(c==5000){break;}   	
     int k=q1.front();q1.pop();
     int l=q2.front();q2.pop();
     c++;
     if(k>l)
     {
     	q1.push(l);q1.push(k);
     }
     else
     {
     	q2.push(k);q2.push(l);
     }
   }
   if(c==5000){cout<<-1;}
   else if(q1.empty()){
   cout<<c<<" "<<2;}else{cout<<c<<" "<<1;}
}