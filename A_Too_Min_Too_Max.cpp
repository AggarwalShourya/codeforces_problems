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
    sort(vec.begin(),vec.end());
    ll i=vec[0];
    ll j=vec[n-1];
    ll k=vec[1];
    ll l=vec[n-2];
    ll nums=abs(i-j)+abs(j-k)+abs(k-l)+abs(l-i);
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