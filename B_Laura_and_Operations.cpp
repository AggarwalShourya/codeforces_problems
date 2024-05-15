#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define f(i, a, b) for (ll i = a; i < b; i++)

void solve()
{
  ll a;
  ll b;
  ll c;
  cin>>a>>b>>c;
  if((b-c)%2==0){
    cout<<1<<" ";
  }
  else{
    cout<<0<<" ";
  }
  
  if((a-c)%2==0){
    cout<<1<<" ";
  }
  else{
    cout<<0<<" ";
  }
 
  if((a-b)%2==0){
    cout<<1<<" ";
  }
  else{
    cout<<0<<" ";
  }
  cout<<endl;

  
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