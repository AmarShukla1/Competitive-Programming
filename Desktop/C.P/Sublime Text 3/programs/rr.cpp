//Tonight's the night and it is going to happen again and again.
#include<bits/stdc++.h>
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
    int n;cin>>n;int a[n];
    string s;cin>>s;
    for(int i=0;i<n;i++){if(s[i]=='1'){a[i]=1;}else{a[i]=-1;}}
	//longest subarray of sum 0 is the question.
    	ll sum=0;int maxlen=0;
    for(int i=0;i<n;i++)
    {
      sum+=a[i];
      if(sum==0){maxlen=i+1;}
      else if(m[sum])
      {
      maxlen=max(maxlen,i-(m[sum]-1));//x.......x//if same value occurs then it means its 0 sum
      	//subarray.
      }
      else
      {
      	m[sum]=i+1;
      }
    }	
   cout<<maxlen;
}