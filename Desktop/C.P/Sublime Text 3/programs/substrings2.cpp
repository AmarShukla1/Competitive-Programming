//Tonight's the night and it is going to happen again and again.
//I think I implemented divide and conquer unknowingly here coz that what div and conquer is.
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mp make_pair
#define pb push_back
int bin(int lo,int hi,string s,string s2,vector<int>p,int p1)
{
  int ans1=0,ans2=0;int c=0;
  while(lo<=hi)
    {
      int mid=lo+(hi-lo)/2;
      string comp=s.substr(p[mid],p1);
      int y=s2.compare(comp);
      if(y==0)
      {
          c++;
          ans1=bin(lo,mid-1,s,s2,p,p1);//this is div and conq to be precise.
          ans2=bin(mid+1,hi,s,s2,p,p1);
          break;
      }
        else if(y<0)
        {
          hi=mid-1;
        }
        else
        {
         lo=mid+1;
        }
        
    }
    return c+ans1+ans2;
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
  string s;int k1;cin>>s;s+="$";
  //building suffix array.
  int n=s.length();
  vector<int>p(n),c(n);
  vector<pair<char,int> >a(n);
  for(int i=0;i<n;i++){a[i]={s[i],i};}
  sort(a.begin(),a.end());
  for(int i=0;i<n;i++){p[i]=a[i].second;}
  	c[p[0]]=0;
  for(int i=1;i<n;i++)
  {
  	if(a[i].first==a[i-1].first)
  	{
  		c[p[i]]=c[p[i-1]];
  	}
  	else{c[p[i]]=c[p[i-1]]+1;}
  }
  int k=0;
  while((1<<k)<n)
  {
  	vector<pair<pair<int,int>,int> >v(n);
  	for(int i=0;i<n;i++)
  	{
  		v[i]={{c[i],c[(i+(1<<k))%n]},i};
  	}
  	sort(v.begin(),v.end());
  	for(int i=0;i<n;i++){p[i]=v[i].second;}
  		c[p[0]]=0;
  for(int i=1;i<n;i++)
  {
  	if(v[i].first==v[i-1].first)
  	{
  		c[p[i]]=c[p[i-1]];
  	}
  	else{c[p[i]]=c[p[i-1]]+1;}
  }
  k++;	
  }
  for(int i=0;i<n;i++){cout<<p[i]<<" "<<s.substr(p[i])<<endl;}
  cin>>k1;
  while(k1--)
  {
  	string s2;int o=0;
  	cin>>s2;
    int p1=s2.length();
    int lo=1;int hi=n-1;
    int y=bin(lo,hi,s,s2,p,p1);
    cout<<y<<"\n";  
  }  
}