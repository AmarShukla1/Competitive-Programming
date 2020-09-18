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
 int n,l,m,r,k;
 string s;
 cin>>s>>m;
 n=s.length();
 for(int i=0;i<m;i++)
 {
 	cin>>l>>r>>k;
 	k=k%(r-l+1);
      string h=s.substr(l-1,r-l+1);int h2=h.length();
      string h1=h+h;//using the h+h wala concept.
      s=s.substr(0,l-1)+h1.substr(h2-k,h2)+s.substr(r);
 }cout<<s;
 }