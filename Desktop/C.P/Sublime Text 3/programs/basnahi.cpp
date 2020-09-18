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
   int a[n];
   for(int i=0;i<n;i++)
   {
   	cin>>a[i];
   }
   int i=0;int j=n-1;int count1=0;int req=0;string s;
   while(i<=j)
   {
    if(a[i]<req&&a[j]<req){break;}
    if(min(a[i],a[j])>req)
    {
      if(a[i]<a[j]){s+='L';req=a[i];i++;}
      else{s+='R';req=a[j];j--;}
    }
    else
    {
      if(a[i]>req){s+='L';req=a[i];i++;}
      else{s+='R';req=a[j];j--;}
    }
    count1++;
   }
   cout<<count1<<"\n";
   cout<<s;
}