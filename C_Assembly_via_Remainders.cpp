#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define f(i, a, b) for (ll i = a; i < b; i++)

void solve()
{
  ll n;
  cin>>n;
  vi vec(n-1);
  f(i,0,n-1){
    cin>>vec[i];
  }
  vi a(n);
    a[0]=10000;
    f(i,1,n){
      
        a[i]=a[i-1]+vec[i-1];
}
 f(i,0,n){
        cout<<a[i]<<" ";
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