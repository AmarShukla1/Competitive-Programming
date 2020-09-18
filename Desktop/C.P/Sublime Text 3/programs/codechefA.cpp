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
 int t,n;cin>>t;
 while(t--)
 {
 	cin>>n;int a[n],b[n];
 	for(int i=0;i<n;i++){cin>>a[i];}
 	for(int i=0;i<n;i++){cin>>b[i];}
 	sort(a,a+n);sort(b,b+n);int t,ind;
    map<int,vector<int> >m,m1;
 	for(int i=0;i<n;i++){m[a[i]].push_back(i);}
 	for(int i=0;i<n;i++){m1[b[i]].push_back(i);}
 		int c;
 		ll sum=0;
 	for(int i=0;i<n;i++)
 	{c=0;
 		if(a[i]>b[i])
 		{
           if(m1[b[i]].size()>1)//then replace
           {
             t=a[i];
             ind=m1[b[i]][0];
             if(ind==i){
                 ind=m1[b[i]][1];
                 m1[b[i]].erase(m1[b[i]].begin()+1);
                     }//cout<<ind<<" ";
             else{m1[b[i]].erase(m1[b[i]].begin());}
             a[i]=b[i];
             b[ind]=t;
             m1[b[i]].erase(m1[b[i]].begin());
             m[t].erase(m[t].begin());
             m1[t].insert(m1[t].begin(),ind);
             sum+=b[i];
           }
           else{c++;}
 		}
 		else if(a[i]<b[i])
 		{
            if(m[a[i]].size()>1)
            {
                t=b[i];
                ind=m[a[i]][0];
                if(ind==i)
                {
                ind=m[a[i]][1];//cout<<ind<<" ";
                m[a[i]].erase(m[a[i]].begin()+1);}
                else{m[a[i]].erase(m[a[i]].begin());}
                b[i]=a[i];
                a[ind]=t;
                m[a[i]].erase(m[a[i]].begin());
                m1[t].erase(m1[t].begin());
                m[t].insert(m[t].begin(),ind);
                sum+=a[i];
            }
            else{c++;}
 		}
 		if(c==1)
 		{
 			cout<<-1<<endl;break;
 		}
 	}
 		if(c!=1){cout<<sum<<endl;}
 		
 		//for(int i=0;i<n;i++){cout<<a[i]<<" ";}cout<<endl;
 			//for(int i=0;i<n;i++){cout<<b[i]<<" ";}
 }
}