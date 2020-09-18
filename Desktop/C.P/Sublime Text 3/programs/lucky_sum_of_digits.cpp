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
   int n,a=0,b=0,k=0;
   cin>>n;
   ll min=1000000000;
   int li=(n/7)+1;
   for(int i=0;i<=li+1;i++)
   {if((n-7*i)<0){break;}
   	if((n-7*i)%4==0)
   	{
      k=(n-7*i)/4;
      if((k+i)<min)
      {
        min=k+i;
        a=k;b=i;
      }  
    }
   	}
   	if(a==0&&b==0){cout<<-1;}
   	else{
   	for(int i=0;i<a;i++)
   	{
   		cout<<4;
   	}
   	for(int i=0;i<b;i++){cout<<7;}
   }
}