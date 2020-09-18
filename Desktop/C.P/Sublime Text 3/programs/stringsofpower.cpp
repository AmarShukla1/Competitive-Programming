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
 string s;cin>>s;//if(s.length()<10){cout<<0;exit(0);}
 string h="heavy";string m="metal";vector<int>v;int c=0;int n=s.length();
 for(int i=0;i<n-4;i++)//new thing learnt agar isme s.length()-4 likhte to runtime error
 	//bcoz i think wo s.length-4 as a negative comprehend nahi karta,jab s.length()<=3 hota
 	//whereas converting that into an integer does the work.
 {
 	if(s.substr(i,5)==h)
 	{
 		i+=4;v.push_back(1);
 	}
 	else if(s.substr(i,5)==m)
 	{
 		i+=4;v.push_back(2);c++;
 	}
 }
 int ind=v.size();ll ways=0;
 //2 2 2 1 2 1 2 2 2 2 2 1 1 1 2 1 
 for(int i=0;i<v.size();i++)
 {
   if(v[i]==2){c--;}
   else{ind=i;break;}
 }
 for(int i=ind;i<v.size();i++)
 {
 	if(v[i]==1)
 	{
      ways+=c;
 	}
 	else
 	{
 		c--;
 	}
 }
 cout<<ways;   
}