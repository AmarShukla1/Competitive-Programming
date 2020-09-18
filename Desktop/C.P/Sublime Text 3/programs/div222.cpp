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
   int t,n,k;cin>>t;
   while(t--)
   	{
   		cin>>n>>k;
   		int a[n][n];
   		memset(a,0,sizeof(a));
   		if(n>=k){
   		for(int i=0;i<k;i++)
   		{
   			a[i][i]=1;
   		}
   		if(n<k)
   		{
   			cout<<2<<endl;
   		}
   		else{cout<<0<<endl;}
   		for(int i=0;i<n;i++)
   		{
   			for(int j=0;j<n;j++)
   			{
   				cout<<a[i][j];
   			}
   			cout<<endl;
   		}
   	}
   	else
   	{
      for(int i=0;i<n;i++)
   		{
   			a[i][i]=1;
   		}
   		ll y=k-n;int c=0;bool step=0;int b=1;
   		while(c<y){
   		if(!step){
   		for(int i=0;i<n-b;i++)
   		{
   			a[i+b][i]=1;c++;if(c==y){goto sos;}
   		}
   		step=1;
   	}
   		if(step){
   		for(int i=0;i<n-b;i++)
   		{
   			a[i][i+b]=1;c++;if(c==y){goto sos;}
   		}
   		step=0;b++;
   		}
   		}
   		sos:	
   		//ans calc	
   		ll sum=0;ll sum1=0,sum2=0;ll sum3=10000000000,sum4=10000000000;
       for(int i=0;i<n;i++)
   		{
   			for(int j=0;j<n;j++)
   			{
   				sum+=a[i][j];
   				
   			}
   			sum1=max(sum1,sum);
   			sum3=min(sum3,sum);sum=0;
   		}sum=0;
   		 for(int i=0;i<n;i++)
   		{
   			for(int j=0;j<n;j++)
   			{
   				sum+=a[j][i];
   				
   			}
   			sum2=max(sum2,sum);
   			sum4=min(sum4,sum);sum=0;
   		}
   		ll ans=((sum1-sum3)*(sum1-sum3))+((sum2-sum4)*(sum2-sum4));
        cout<<ans<<endl;
        for(int i=0;i<n;i++)
   		{
   			for(int j=0;j<n;j++)
   			{
   				cout<<a[i][j];
   			}
   			cout<<endl;
   		}
   	}
    } 
}