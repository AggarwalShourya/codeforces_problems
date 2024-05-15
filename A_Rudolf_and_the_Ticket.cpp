#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define f(i, a, b) for (ll i = a; i < b; i++)

void solve()
{
  ll n;
  ll m;
  ll k;
  cin>>n>>m>>k;
  vi vec1(n);
  vi vec2(m);
  int nums=0;
  f(i,0,n){
    cin>>vec1[i];
  }
  f(i,0,m){
    cin>>vec2[i];
  }
f(i,0,n){
    f(j,0,m){
        if(vec1[i]+vec2[j]<=k)
        nums++;
    }
}
cout<<nums<<endl;




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