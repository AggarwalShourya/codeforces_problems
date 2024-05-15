#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define f(i, a, b) for (ll i = a; i < b; i++)

void solve()
{
  ll n;
  cin>>n;
  ll k;
  cin>>k;
  ll m;
  vi vec(n);
  f(i,0,n){
    cin>>vec[i];
  }
  f(i,0,n){
    while(i>n){
        m=*max_element(vec.begin(),vec.end());
        vec[m]=vec[m]-k;
        
    }
  }




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