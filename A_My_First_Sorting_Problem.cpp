#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define f(i, a, b) for (ll i = a; i < b; i++)
const ll m1 = 1e12 + 7;

void solve()
{
  vi vec(2);
  f(i,0,2){
    cin>>vec[i];
  }
  sort(vec.begin(),vec.end());
  cout<<vec[0]<<" "<<vec[1]<<endl;



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