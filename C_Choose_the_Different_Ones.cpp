#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define f(i, a, b) for (ll i = a; i < b; i++)

void solve()
{
  ll n;
  cin>>n;
  ll m;
  cin>>m;
  ll k;
  cin>>k;
  vi vec1(n);
  vi vec2(m);
  f(i,0,n)
  {cin>>vec1[i];}
  f(i,0,m)
  {cin>>vec2[i];}
 vi vec3(n+m);

    f(k,0,m){
      vec3.push_back(vec2[k]);
    }
    f(j,0,n){
      vec3.push_back(vec1[j]);
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