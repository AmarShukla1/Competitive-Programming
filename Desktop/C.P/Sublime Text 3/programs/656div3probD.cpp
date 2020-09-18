//Tonight's the night and it is going to happen again and again.
//I was very close in this
//It was divide and conquer recursion type.
//i should have put the loop in the function and recurse it instead of making infinite loop.
//why didnt i make a mid then whole logic would hae flown through.
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mp make_pair
#define pb push_back
#define endl "\n"
int freq(string s,int i,int j,char ch)
{
	int count1=0;
   for(int k=i;k<j;k++)
   {
   	if(s[k]==ch){count1++;}
   }
   return count1;
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
 int t,n;cin>>t;
 while(t--)
 {
 	cin>>n;
 	string s;cin>>s;int count=0;
 	char ch='a';int i=0;int j=n/2;int k=n;
 	while(1)
 	{
 	int size=j-i;
 	if(size<=0){if(s[i]!=ch){count++;}break;}	
 	int y1=freq(s,i,j,ch);
 	int y2=freq(s,j,k,ch);
 	if(y1>=y2){count+=(size-y1);i=j;j=(j+k)/2;k=n;}
    else if(y1<y2){count+=(size-y2);i=i;j=(i+j)/2;k=k/2;}
    
    ch=ch+1;
    }
    cout<<count<<endl;
 }   
}