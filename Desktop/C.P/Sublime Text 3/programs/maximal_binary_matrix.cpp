//Tonight's the night and it is going to happen again and again.
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
   int n,k;cin>>n>>k;int a[n][n];
   memset(a,0,sizeof(a));
   if(k>(n*n)){cout<<-1;exit(0);}
   else if(k==0){goto sos;}
   else
   {
   		int o=0;
   		for(int i=0;i<n;i++)
   		{
   			for(int j=i;j<n;j++)
   			{
   				if(i==j){a[i][i]=1;o++;if(o==k){goto sos;}
                if((k-o)==1){a[i+1][i+1]=1;goto sos;}continue;}
   				a[i][j]=1;a[j][i]=1;
                o+=2;
                if(o==k){goto sos;}
                if((k-o)==1){a[i+1][i+1]=1;goto sos;}
   			}
   		}
   	}   	
   	sos:
   	for(int i=0;i<n;i++)
   		{
   			for(int j=0;j<n;j++)
   			{
   				cout<<a[i][j]<<" ";
   			}
   			cout<<"\n";
   		}
   }
