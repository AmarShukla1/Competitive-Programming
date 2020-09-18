//Tonight's the night and it is going to happen again and again.
#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
#define mp make_pair
#define pb push_back
vector<int> rabin_karp(string s, string  t) {
    const int p = 31; 
    const int m = 1e9 + 9;
    int S = s.size(), T = t.size();

    vector<long long> p_pow(max(S, T)); 
    p_pow[0] = 1; 
    for (int i = 1; i < (int)p_pow.size(); i++) 
        p_pow[i] = (p_pow[i-1] * p) % m;

    vector<long long> h(T + 1, 0); 
    for (int i = 0; i < T; i++)
        h[i+1] = (h[i] + (t[i] - 'a' + 1) * p_pow[i]) % m; 
    long long h_s = 0; 
    for (int i = 0; i < S; i++) 
        h_s = (h_s + (s[i] - 'a' + 1) * p_pow[i]) % m; 

    vector<int> occurences;
    for (int i = 0; i + S - 1 < T; i++) { 
        long long cur_h = (h[i+S] + m - h[i]) % m; 
        if (cur_h == h_s * p_pow[i] % m)
            occurences.push_back(i);
    }
    return occurences;
}
/*ll binary_pow(ll x,ll n,ll m)
{
    if(n==0)
        return 1ll;
    else if(n%2==0)  
        return binary_pow((x*x)%m,n/2,m);
    else                             
        return (x*binary_pow((x*x)%m,(n-1)/2,m))%m;
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
   ll n; 
  while(cin>>n)
  {
  string s;string pat;
  cin>>pat>>s;
  if(pat.length()>s.length()){cout<<"\n\n";continue;}
  ll p=2;ll m=1e18+7;ll pow1=1;ll hash=0,hashs=0;vector<ll>v;
  for(int i=0;i<pat.length();i++)
  {
    hash=(hash+((pat[i]-'a'+1)*pow1)%m)%m;
    pow1=(pow1*p)%m;
  }
  pow1=1;
  for(int i=0;i<pat.length();i++)
  {
     hashs=(hashs+((s[i]-'a'+1)*pow1)%m)%m;
     pow1=(pow1*p)%m;
  }
  if(hash==hashs){v.pb(0);}
  ll req=binary_pow(p,pat.length()-1,m);
  for(int i=1;i<(s.length()-pat.length()+1);i++)
  {

   hashs=hashs-(s[i-1]-'a'+1);
   hashs=hashs/p;
   hashs=((hashs+((s[i+pat.length()-1]-'a'+1)*req)%m))%m;
   if(hashs==hash){v.pb(i);}
        
  }
  if(v.size()==0){cout<<"\n\n\\";}
  else{
   for(auto t:v)
   {
    cout<<t<<'\n';
   }
 }
 }
}
*/
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
   #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
   #endif
   ll n; 
  while(cin>>n)
  {
  string s;string pat;
  cin>>pat>>s;vector<int>v;
  v=rabin_karp(pat,s);
  for(auto t:v){cout<<t<<" ";}
}
}