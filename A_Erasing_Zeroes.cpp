#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define f(i, a, b) for (ll i = a; i < b; i++)

void solve()
{
  string s;
  int pos=0;
  int pos2=0;
  int c=0;
  cin>>s;
  f(i,0,s.length()){
    if(s[i]=='1'){
      pos=i;
      break;
    }
  }
  for(int i=s.length();i>=pos;i--){
      if(s[i]=='1'){
      pos2=i;
      break;
      }
  }
  f(i,pos,pos2){
      if(s[i]=='0'){
        c++;
      }
      
  }
  cout<<c<<endl;
}

int main()
{
 ios_base::sync_with_stdio(false);
  cout.tie(NULL);
  cin.tie(NULL);
  ll t = 1;
  cin>>t;
  while(t--)
  {
      solve();
  }
}