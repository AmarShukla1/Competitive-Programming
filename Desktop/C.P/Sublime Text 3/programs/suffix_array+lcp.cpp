//suffix array
//generating suffix array.
//time complexity is O(n(log^2n))
//logn iterations and nlogn for sorting at each iteration.
//Tonight's the night and it is going to happen again and again.
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mp make_pair
#define pb push_back
#define endl "\n"
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
   #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
   #endif
  string s;
  cin>>s;
  s+="$";
  int n=s.length();
  vector<int>p(n),c(n);//p[i] here contains the sorted suffix arrays
  //c[i] here contains the equivalence classes
  //a[i] here is bringing the algorithm together a[i] is s[i],position. 
  //with equivalence classes
  //--> k=0
  vector<pair<char,int> >a(n);
  for(int i=0;i<n;i++)
  {
    a[i]={s[i],i};
  }
  sort(a.begin(),a.end());
  for(int i=0;i<n;i++)
  {
  	p[i]=a[i].second;
  }
  c[p[0]]=0;
  for(int i=1;i<n;i++)
  {
  	if(a[i].first==a[i-1].first)
  	{
  		c[p[i]]=c[p[i-1]];
  	}
  	else
  	{
  		c[p[i]]=c[p[i-1]]+1;
  	}
  }
  //--> for 2^k.
  int k=0; 
  while((1<<k)<n)
  {
    vector<pair<pair<int,int>,int> >v(n);
    //v[i] here is left_part equivalence,right_part equivalence,position.
    //we would then sort this and use the position and determine the order of sorted suffix
    //arrays.
    for(int i=0;i<n;i++)
    {
    	v[i]={{c[i],c[(i+(1<<k))%n]},i};//%n as it is cyclic array. 
    }
    sort(v.begin(),v.end());//we could also sort by a comparator but this is a 
    //simpler method using stl.
     for(int i=0;i<n;i++)
     {
  	p[i]=v[i].second;
     }
  c[p[0]]=0;//generating equivalence classes.
  for(int i=1;i<n;i++)
  {
  	if(v[i].first==v[i-1].first)
  	{
  		c[p[i]]=c[p[i-1]];
  	}
  	else
  	{
  		c[p[i]]=c[p[i-1]]+1;
  	}
  }
  k++;		
  }  
  for(int i=0;i<n;i++)
  {
  	cout<<p[i]<<" ";
  }cout<<endl;
  vector<int>lcp(n);
  k=0;
  for(int i=0;i<n-1;i++)
  {
    int pi=c[i];//position of ith suffix
    //c[i] is the equivalence classes array and it can be used to find these inversions.
    int j=p[pi-1];//position of i-1 suffix.
    //it will be one above in the p[i] array.
    while(s[i+k]==s[j+k]){k++;}//k characters matched(only can be more than k not less.)
    lcp[pi]=k;
    k=max(k-1,0);//k-1
  }
for(int i=1;i<n;i++)
  {
    cout<<lcp[i]<<" ";
  }
}