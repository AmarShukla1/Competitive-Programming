//Tonight's the night and it is going to happen again and again.
/*#include<bits/stdc++.h>//this solution is binary search.Hotels spoj.
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
  ll n,m,sum_max=-1,ans=-1;
  cin>>n>>m;int a[n];ll sum[n+1];sum[0]=0;
  for(int i=0;i<n;i++){cin>>a[i];sum[i+1]=sum[i]+a[i];cout<<sum[i+1]<<" ";}
  for(int i=0;i<=n;i++)
    {
      int lo=0;int hi=n;ll key=sum[i]+m;
      while(lo<=hi)
      {
        int mid=lo+(hi-lo)/2;
        if(sum[mid]<=key)
        {
          lo=mid+1;
          ans=max(ans,sum[mid]);
        }
        else
        {
          hi=mid-1;
        }
      }
      sum_max=max(sum_max,ans-sum[i]); 
      }  
  cout<<sum_max;
}*/
//Tonight's the night and it is going to happen again and again.
#include<bits/stdc++.h>//this is using sliding window using deque.Hotels,spoj.
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
   int n,k;cin>>n>>k;ll max_sum=-1;
   int a[n];for(int i=0;i<n;i++){cin>>a[i];}
   deque<int>dq;ll sum=0;
   for(int i=0;i<n;i++)
   {
     
     if(sum+a[i]<=k){dq.push_back(a[i]);sum+=a[i];max_sum=max(max_sum,sum);}
     else if(sum+a[i]>k){int y=dq.front();dq.pop_front();sum-=y;i--;}
   }
   cout<<max_sum;
}