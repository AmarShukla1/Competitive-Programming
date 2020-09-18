//Tonight's the night and it is going to happen again and again.
//this problem is 665 C simple strings.
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
 string s;cin>>s;int n=s.length();char ch=s[n-2];s+=ch;
 //done because we have to access s[i+1]
 //instead of writing extra conditions for last element we do this
 for(int i=1;i<s.length()-1;i++)
 {
 	if(s[i]==s[i-1])
 		{
 			if(s[i+1]==s[i-1]&&s[i+1]=='z'){s[i]='a';}//extra condn of z 
 			else if(s[i+1]==s[i-1]){s[i]+=1;}
 			else
 			{
 				s[i]=(s[i-1]+s[i+1])/2;
 			}
 			
 				//this is done only bcoz (a+b)/2 gives a so we will plus 2 s[i] 
 			    if((s[i]==s[i-1])||(s[i]==s[i+1]))
 				{
 					if(s[i]=='z'){s[i]='b';}
 					//we have put extra conditions on y and z.
 					else if(s[i]=='y'){s[i]='a';}
 					else{s[i]+=2;}
 				}
 			
 		  }
 }
 cout<<s.substr(0,n);   
}