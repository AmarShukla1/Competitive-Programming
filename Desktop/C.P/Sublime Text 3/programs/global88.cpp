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
 ll k;cin>>k;string s="codeforces";
 int freq[10];
 for(int i=0;i<10;i++){freq[i]=1;}
 	ll mul=1;
 while(mul<k)
 {
 	for(int i=0;i<10;i++)
 	{
 		mul/=freq[i];
 		freq[i]++;
        mul*=freq[i];
        if(mul>=k){break;}
 	}
 }
 for(int i=0;i<10;i++)
 {
 	for(int j=0;j<freq[i];j++)
 	{
 		cout<<s[i];
 	}
 }  
}