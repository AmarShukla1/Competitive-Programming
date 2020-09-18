//Tonight's the night and it is going to happen again and again.

/*my wrong approach first:#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mp make_pair
#define pb push_back
unordered_map<int,int>m;
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
   int a[n];int b[n];int ind;
   for(int i=0;i<n;i++){cin>>a[i];if(a[i]==0){ind=i;}}
   for(int i=0;i<n;i++){cin>>b[i];}
   	for(int i=0;i<n;i++)
   	{
   		if(i==ind){continue;}
   		if(i==n-1)
   		{
   			if(a[0]==0){m[a[i]]=a[1];}
   			else{m[a[i]]=a[0];}
   			continue;
   		}
   		if(a[i+1]==0){if(i+2>=n){m[a[i]]=a[0];}else{m[a[i]]=a[i+2];}}
   		m[a[i]]=a[i+1];
   		
   	}
    for(int i=1;i<n;i++)
    {
    	if(b[i]==m[b[i-1]]||b[i]==0||b[i-1]==0)
    	{
    		continue;
    	}
    	else{cout<<"NO";exit(0);}
    }
    cout<<"YES";
}*/
//if we just remove the 0 then essentially a and b are cyclic shifts.as we go cylically.
//Tonight's the night and it is going to happen again and again.
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mp make_pair
#define pb push_back
unordered_map<int,int>m1,m2;
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
   #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
   #endif
   int n,k;cin>>n;
   vector<int>a,b;int w=0;
   for(int i=0;i<n;i++)
   {
   	cin>>k;if(k!=0){a.push_back(k);m1[k]=w;w++;}
   
   }
   w=0;
   for(int i=0;i<n;i++)
   {
   	cin>>k;if(k!=0){b.push_back(k);m2[k]=w;w++;}
   }
   int d=m1[b[0]]-m2[b[0]];if(d<0){d=(n-1+d);}
   for(int i=1;i<n-1;i++)
   {
      int d2=m1[b[i]]-m2[b[i]];
      if(d2<0){d2=n-1+d2;}
      if(d==d2){continue;}
      else{cout<<"NO";exit(0);}
   }
   cout<<"YES";
}