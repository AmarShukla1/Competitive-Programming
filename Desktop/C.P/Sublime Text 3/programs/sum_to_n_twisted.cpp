#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mp make_pair
#define pb push_back
int arr [101][2];
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
   #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
   #endif
   int n,k,d;
   cin>>n>>k>>d;
   //question is no of ways to sum a number to n and taking one number more than 
   //equal to d
   //k is 1...k(nos availa to sum)
   //lets break this question to no of ways to sum a number.and
   //then adding the other restriction
   //this sum is kinda unbounded knapsack without any cost though.
   /*arr[0]=1;
   for(int i=1;i<=n;i++)
   {
   	for(int j=1;j<=n;j++)
   	{
   		if(i>=j){
   		arr[i]+=arr[i-j];
   	            }
    }
   }*/
   //summing for upto n is done via unbounded knapsack
   //now coding for restriction.
   arr[0][0]=1;
   for(int i=1;i<=n;i++)
   {
   	for(int j=1;j<=n;j++)
   	{
   		if(i>=j&&)
   		{
   			arr[i][0]+=arr[i-j][0];
   		}
   	}
   } 
}
