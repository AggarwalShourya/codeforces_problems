#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define f(i, a, b) for (ll i = a; i < b; i++)

void solve()
{
  ll n;
  cin>>n;
  vi vec(n);
  f(i,0,n){
    cin>>vec[i];
  }
  //ll median;
  ll nums=0;
  sort(vec.begin(),vec.end());
  ll median=ceil(n/2.0);
f(i,median-1,n){
  if(vec[i]==vec[median-1]){
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