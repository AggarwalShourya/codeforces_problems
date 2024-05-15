#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define f(i, a, b) for (ll i = a; i < b; i++)
const ll m1 = 1e12 + 7;

void solve()
{
  ll n;
  ll x;
  cin>>x>>n;
  ll count=0;
  vi vec;
  f(i,n,x){
    if(x%i==0){
        // count=i;
        vec.push_back(i);
    }
  }
  sort(vec.begin(),vec.end());
cout<<x/vec[0]<<endl;


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