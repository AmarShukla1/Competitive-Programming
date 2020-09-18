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
 int t,n;cin>>t;string k="abacaba";
 while(t--)
 {

 	cin>>n;string s;int c1;
 	cin>>s;deque<int>v;
 	for(int i=0;i<s.length();i++){if(s[i]=='?'){v.push_back(i);}}
 	//sort(v.begin(),v.end(),greater<int>());
 	int pos=0;int index;int c=0;
   while((index = s.find(k, pos)) != string::npos) {
      pos = index + 1;c++; 
   }
   if(c==0){
   int w=0;
 	for(int i=0;i<s.length();i++)
 	{
     if(s[i]==k[w])
     {
     	w++;
     }
     else if(s[i]=='?')
     {
     	s[i]=k[w];
     	w++;
     }
     else{w=0;}
     if(w==7){
     	int pos1=0;int index1;c1=0;
   while((index1 = s.find(k, pos1)) != string::npos) {
      pos1 = index1 + 1;c1++;
     }
     if(c1==1){break;}
     else{
     	if(v.size()==0){break;}
     	i=v.front();s[v.front()]='x';w=0;v.pop_front();
     }
 	} 
   }
   
 	for(int i=0;i<s.length();i++){if(s[i]=='?'){s[i]='x';}}	
 	if(w==7&&c1==1){cout<<"YES"<<endl;cout<<s<<endl;}
 	else{cout<<"NO"<<endl;}
 	continue;
   }
  else if(c==1){for(int i=0;i<s.length();i++){if(s[i]=='?'){s[i]='x';}}cout<<"YES"<<endl<<s<<endl;}
  else if(c>1){cout<<"NO"<<endl;}	
 }   
}