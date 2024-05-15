#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define f(i, a, b) for (ll i = a; i < b; i++)
const ll m1 = 1e12 + 7;

void solve()
{
  ll n;
  cin>>n;
vi a(n);
vi b(n);
f(i,0,n){
  cin>>a[i];
}
f(i,0,n){
  cin>>b[a[i]-1];
}
  ll counta=0;
  ll countb=0;
  sort(a.begin(),a.end());
  f(i,0,n){
    cout<<a[i]<<" ";
  }
  cout<<endl;
  f(i,0,n){
    cout<<b[i]<<" ";
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