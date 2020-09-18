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
   int n,m;
   while(cin>>n)
   {
    
   	int a[n];
   	for(int i=0;i<n;i++)
   	{
   		cin>>a[i];
   	}
    int m;cin>>m;
   	sort(a,a+n);
    int p1=0;int q1=10000000;
    int p=0;int q=10000000;
   	
   	for(int i=0;i<n;i++)
   	{
   		int lo=0;
   	    int hi=n-1;
   		while(lo<=hi)
   		{
   		         	int mid=lo+(hi-lo)/2;
                   
                    if(a[mid]==m-a[i])
                    {
                        if(mid==i){break;}
                        p=a[i];q=a[mid];
                        break;
                    }
                    else if(a[mid]>m-a[i])
                    {
                        hi=mid-1;
                    }
                    else{lo=mid+1;}

   		}
        if(abs(p-q)<abs(p1-q1))
        {
           
            p1=p;
            q1=q;
        }
   	}
    cout<<"Peter should buy books whose prices are "<<p1<<" and "<<q1<<".\n\n";
   }  
