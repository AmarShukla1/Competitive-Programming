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
   int t,n,m1;
   cin>>t;
   while(t--)
   {
    cin>>n>>m1;unordered_map<int,int>m;int c=0;
    int a[n][m1];int t[n][m1];
    memset(t,0,sizeof(t));
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<m1;j++)
      {
        cin>>a[i][j];m[a[i][j]]++;
      }
    }//input ends 
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<m1/2;j++)
      {
        if(a[i][j]==a[i][m1-j-1]&&m[a[i][j]]>1)
        {
          t[i][j]=a[i][j];t[i][m1-j-1]=a[i][j];
          m[a[i][j]]-=2;
          continue;
        }
        else
        {
          if(m[a[i][m1-1-j]]>1)
          {
            t[i][j]=a[i][m1-j-1];
            t[i][m1-j-1]=a[i][m1-j-1];
            m[a[i][m1-1-j]]-=2;

          }
          else if(m[a[i][j]]>1)
          {
            t[i][j]=a[i][j];
           t[i][m1-j-1]=a[i][j];
            m[a[i][j]]-=2; 
          }
          
        }
      }
    }//only empty remains
    vector<int>v;
    int w=0;
    if(m1&1)
    {
      for(auto t1:m)
    {
      if(t1.second!=0){v.push_back(t1.first);}
    }
     if(v.size()==0){goto sos1;}
      for(int i=0;i<n;i++)
      {
        if(t[i][m1/2]==0)
        {
          t[i][m1/2]=v[w];
          m[v[w]]--;if(!m[v[w]]){w++;}
        }
      }
    }
    else{
      for(auto t1:m)
    {
      if(t1.second>0&&(t1.second%2==0)){v.push_back(t1.first);}
    }
    if(v.size()==0){goto sos1;}
    for(int i=0;i<n;i++)
      {
        for(int j=0;j<m1/2;j++)
        {
          if(t[i][j]==0)
          {
            t[i][j]=v[w];t[i][m1-j-1]=v[w];
            m[v[w]]-=2;
            if(!m[v[w]]){w++;}
          }
        }
      }
    }
    sos1:
      for(int i=0;i<n;i++)
      {
        for(int j=0;j<(m1/2)+1;j++)
        {
          if(t[i][j]==t[i][m1-j-1]&&(t[i][j]!=0))
          {
            continue;
          }
          else
          {
            c=1;goto sos;
          }
        }
      }
      sos:
    if(c==1)
    {
      cout<<-1<<"\n";
    }
    else
    {
      for(int i=0;i<n;i++)
      {
        for(int j=0;j<m1;j++)
        {
          cout<<t[i][j]<<" ";
        }
        cout<<"\n";
      }
    }
    }   
}