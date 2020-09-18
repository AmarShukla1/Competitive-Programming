//Tonight's the night and it is going to happen again and again.
//printing lcs..
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
 string s,t;
 cin>>s>>t;
 int n=s.length();int m=t.length();
 int lcsarr[n+1][m+1];string s1;
 memset(lcsarr,0,sizeof(lcsarr));
 for(int i=1;i<n+1;i++)
 {
 	for(int j=1;j<m+1;j++)
 	{
 		if(s[i-1]==t[j-1])
 		{
 			lcsarr[i][j]=1+lcsarr[i-1][j-1];
 		}
 		else
 		{
 			lcsarr[i][j]=max(lcsarr[i-1][j],lcsarr[i][j-1]);
 		}
 	}
 }
 //we have to go in the matrix.
 while(m>0&&n>0)
 {
 	if(s[n-1]==t[m-1])
 	{
 		s1+=s[n-1];
 		m--;n--;
 	}
 	else if(lcsarr[n-1][m]>lcsarr[n][m-1])
 	{
 		n--;
 	}
    else{m--;}
 }
 reverse(s1.begin(),s1.end());
 cout<<s1;
}