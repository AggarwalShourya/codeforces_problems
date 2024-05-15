#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define f(i, a, b) for (ll i = a; i < b; i++)

void solve()
{
  int n,k;
    cin>>n>>k;
    int x=2*(n+n-2);
    if(k<=x)
    {
        if(k&1)
            k++;
        cout<<k/2<<endl;
    }
    else
        cout<<x/2+(k-x)<<endl;
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