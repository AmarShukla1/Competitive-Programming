//Tonight's the night and it is going to happen again and again.
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mp make_pair
#define pb push_back
#define endl "\n"
string s;
int counter(int a,int b,char ch)
{
  int count1=0,count2=0,mid=(a+b)/2;	
  if(a+1==b)
  {
  	return s[a]!=ch;
  }
  else
  {
  	for(int i=a;i<mid;i++)
  	{
  		if(s[i]!=ch){count1++;}
  	}
  	for(int i=mid;i<b;i++)
  	{
  		if(s[i]!=ch){count2++;}
  	}
  	return min(count1+counter(mid,b,ch+1),count2+counter(a,mid,ch+1));
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
 int t,n;
 cin>>t;
 while(t--)
 {
 	cin>>n;
 	cin>>s;
 	char ch='a';
 	int k=counter(0,n,ch);
 	cout<<k<<endl;
 }   
}