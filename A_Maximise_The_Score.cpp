#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define f(i, a, b) for (ll i = a; i < b; i++)

void solve()
{
  ll n;
  cin>>n;
  vi vec(2*n);
  f(i,0,2*n){
    cin>>vec[i];
  }
  sort(vec.begin(),vec.end());
  ll score=0;
  f(i,0,n){
    score+=vec[2*n-2*i-2];
  }
    cout<<score<<endl;


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