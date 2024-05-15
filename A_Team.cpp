#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define f(i, a, b) for (ll i = a; i < b; i++)

void solve()
{
  ll n;
  cin>>n;
  ll nums=0;
  int i=0;
ll count=0;
  while(i<n){
  vi vec(3);
  f(i,0,3){
    cin>>vec[i];
  }
  f(i,0,3){
    if(vec[i]==1){
        count++;
    }
    if(count>=2){
        nums++;
    }
  }
  i++;
  }
cout<<nums;



}

int main()
{
  ios_base::sync_with_stdio(false);
  cout.tie(NULL);
  cin.tie(NULL);
//   ll t = 1;
//   cin>>t;
//   while(t--)
  {
      solve();
  }
}