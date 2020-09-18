//Tonight's the night and it is going to happen again and again.
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mp make_pair
#define pb push_back
int answer_arr[500005];//taken for outputting right answer for each query.
int block=1000;int ans;int a[500005];map<int,int>m;
struct test
{
	int l,r,idx;
};
bool comp(test i1,test i2)
{
	if(i1.l/block!=i2.l/block)
	{
		return i1.l/block<i2.l/block;
	}
	return (i1.l/block )% 2?i1.r< i2.r:i1.r>i2.r;
}
void add(int position)
{
  m[a[position]]++;
  if(m[a[position]]==1){ans++;}
}
void remove(int position)
{
  if(m[a[position]]>0)
  	{
  		m[a[position]]--;
  		if(m[a[position]]==0){ans--;}
  	}
  
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
  int n,q;cin>>n>>q;
  for(int i=0;i<n;i++)
  {
  	cin>>a[i];
  }  
  int t1;t1=q;vector<test>v;test w;
  for(int i=0;i<q;i++)
   {
   	cin>>w.l>>w.r;w.l--;w.r--;w.idx=i;
   	v.push_back(w);
   }
   sort(v.begin(),v.end(),comp);
   int curl=0,curr=-1; 
   for(int i=0;i<t1;i++)
   {
     int L=v[i].l;int R=v[i].r;int p=v[i].idx;
     while(curl>L){curl--;add(curl);}
     while(curr<R){curr++;add(curr);}
     while(curl<L){remove(curl);curl++;}
     while(curr>R){remove(curr);curr--;}//\|
     answer_arr[p]=ans;
    }
    for(int i=0;i<q;i++)
    {
    	cout<<answer_arr[i]<<"\n";
    }
}