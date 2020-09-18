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
    int t,n,m;
    cin>>t;
    while(t--)
    	{
    		cin>>n>>m;int a[n][m];
    		for(int i=0;i<n;i++)
    		{
    			for(int j=0;j<m;j++)
    			{
    				cin>>a[i][j];
    			}
    		}int row=0,col=0;int c=0;
    		for(int i=0;i<n;i++)
    		{
    			c=0;
    			for(int j=0;j<m;j++)
    			{
    				if(a[i][j]==1)
    				{
    					c=1;
    					break;
    				}
    			}
    			if(c==0)
    			{
    				row++;
    			}
    		}
    		for(int i=0;i<m;i++)
    		{
    			c=0;
    			for(int j=0;j<n;j++)
    			{
    				if(a[j][i]==1)
    				{
    					c=1;
    					break;
    				}
    			}
    			if(c==0)
    			{
    				col++;
    			}
    		}
    		
            
              int d=min(row,col);
              	if(d&1){cout<<"Ashish\n";}
              	else{cout<<"Vivek\n";}
              
    		
    	}
    }
