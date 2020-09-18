#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mp make_pair
#define pb push_back
struct a{
  double x,y;
};
double fuck(double m)
{
	return sqrt(((m*m)+1)/(m*m));//wrong use of brackets costed us an hour.
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
   int c,n;
   cout<<setprecision(2)<<fixed;
   cin>>c;
   while(c--)
   {
     cin>>n;int a1,b;a pt[n];double sum=0;
     for(int i=0;i<n;i++)
     {
       cin>>a1>>b;
       pt[i].x=a1;
       pt[i].y=b;
     }
     for(int i=0;i<n;i++)
     {
     	double max1=0;double min1=50000,min2=50000;

     	for(int j=0;j<n;j++)
     	{
     		if(i==j){continue;}
     		if(pt[j].y>=pt[i].y && (pt[j].x>pt[i].x))
     		{
     			max1=-1;
     			break;
     		}
     			if(pt[j].x>pt[i].x)
     			{
     				if(min1>pt[j].x)
     				{
                      min1=pt[j].x;min2=pt[j].y;
     				}
     				max1=max(max1,pt[j].y);
     			}
     	}
        if(max1!=-1)
        {
        	double m=fuck(abs((min2-pt[i].y)/(min1-pt[i].x)));
        	sum+=((pt[i].y-max1)*(m));
        }
     }
     cout<<sum<<"\n";
   }
}