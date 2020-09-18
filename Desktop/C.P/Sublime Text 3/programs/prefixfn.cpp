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
 string s;
 cin>>s;
 //if(s.length()<3){cout<<0;exit(0);}
 int n=s.length();ll pref_sum[n];ll suf_sum[n];pref_sum[0]=0;suf_sum[0]=0;
 int first=n,last=-1;
 for(int i=1;i<s.length()-2;i++)
 {
    if(s[i]=='o'){first=i;break;}
 }
 for(int i=s.length()-2;i>=1;i--)
 {
 	 if(s[i]=='o'){last=i;break;}
 }
 int c=0;int w=1;
for(int i=0;i<=last;i++)
{
	if(s[i]=='v'){c++;}
	else if(s[i]=='o'&& (i!=0)){pref_sum[w]=pref_sum[w-1]+max(0,c-1);c=0;w++;}
}
int y=1;c=0;
for(int i=s.length()-1;i>=first;i--)
{
 if(s[i]=='v'){c++;}
	else if(s[i]=='o'&&(i!=n-1)){suf_sum[y]=suf_sum[y-1]+max(0,c-1);c=0;y++;} 
}
ll sum=0;
for(int i=1;i<w;i++)
{
	sum+=(pref_sum[i]*suf_sum[w-i]);//cout<<pref_sum[i]<<" "<<suf_sum[w-i]<<" ";
}
cout<<sum;
}