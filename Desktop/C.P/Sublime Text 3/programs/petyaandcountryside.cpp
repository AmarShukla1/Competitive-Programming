/*#include<bits/stdc++.h>
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
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)
   {
   	cin>>a[i];
   }
   ll c=-a[0];ll min1=-a[0];
   for(int i=1;i<n;i++)
   {
   	min1=min(min1,c);
   	c+=(a[i-1]-a[i]);

   }
   cout<<-min1;   
}
*///this approach was wrong
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
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)
   {
   	cin>>a[i];
   }
   ll c=0;ll min1=-a[0];
   for(int i=1;i<n;i++)
   {
   	int t=a[i-1]-a[i];// we have to just add the no when it becomes negative 
   	//not make it minimum in the previous method.
   	//do as been told.
   	c+=t;
   	if(c<0)
   	{
   		min1+=c;
   		c=0;
   	}
   }
   cout<<-min1;   
}