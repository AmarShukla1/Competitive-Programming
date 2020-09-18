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
    int t,n,x,m,r,l;cin>>t;
    while(t--)
    {
    	cin>>n>>x>>m;ll left=10000000000;ll right=-1;ll sum=0;int step=0;
    	for(int i=0;i<m;i++)
    	{
    		cin>>l>>r;
    			if(step){
    		if(left<=l&&r<=right){continue;}	
    		else if(l<left&&right<r)
    		{
    			sum=r-l+1;
    		}
    		else if(l<=left&&r>=left)
    		{
    			sum+=(left-l);left=l;
    		}
    		else if(l<=right&&r>=right)
    		{
    			sum+=(r-right);right=r;
    		}
    	}
    		if(l<=x&&r>=x)
    		{
    			step=1;
    			sum+=(r-l+1);
    			left=l;right=r;
    			continue;
    		}
    	
    	}
    	cout<<sum<<"\n";
    }
}