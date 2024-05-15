#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define f(i, a, b) for (ll i = a; i < b; i++)

void solve()
{
  ll l;
  ll r;
  cin>>l;
  cin>>r;
  char max='0';
  char min='9';
  vi vec(pow(10,9));
  f(i,l,r+1){
   string s=to_string(i);
   f(j,0,s.length()){
    if(s[j]>max){
        max=s[j];
    }
    if(s[j]<min){
        min=s[j];
    }
   }
   vec.push_back(max-min);
   
  }
  cout<<*max_element(vec.begin(),vec.end())<<endl;

  




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