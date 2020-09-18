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
 ll a;string s;
 cin>>a>>s;
 map<char,string>m;
 m['2']="2";m['3']="3";m['4']="322";m['5']="5";m['6']="53";m['7']="7";m['8']=
 "7222";m['9']="7332";
 string t;
 for(int i=0;i<a;i++)
 {
   if(s[i]=='0'||s[i]=='1'){continue;}	
   t+=m[s[i]];
 }

 sort(t.begin(),t.end(),greater<char>());
 cout<<t;
}