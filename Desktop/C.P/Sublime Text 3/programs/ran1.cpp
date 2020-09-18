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
   int n,k1;cin>>n;
   vector<int>a;
   for(int i=0;i<n;i++)
   {
      cin>>k1;
      a.push_back(k1);
   }
   int start=-1,end=-1;
   for(int i=0;i<n-1;i++)
   {
      if(a[i]>a[i+1])
      { 
        start=i;break;
      }
   }
   if(start==-1){cout<<"yes\n"<<1<<" "<<1<<"\n";exit(0);}
   for(int i=start+1;i<n-1;i++)
   {
      if(a[i]<a[i+1])
      {
         end=i;break;
      }
      else
      {
        end=i+1;
      }
   }
   if(end==-1){reverse(a.begin()+start,a.begin()+start+2);end=start+1;}
   else{
   reverse(a.begin()+start,a.begin()+end+1);}
   bool k=is_sorted(a.begin(),a.end());
   if(k){cout<<"yes\n"<<start+1<<" "<<end+1<<"\n";}
   else{cout<<"no\n";}   
}