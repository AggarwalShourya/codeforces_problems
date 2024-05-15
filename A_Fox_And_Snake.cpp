#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define f(i, a, b) for (ll i = a; i < b; i++)

void solve()
{
    ll m;
    cin >> m;
    ll n;
    cin >> n;
    for (int i = 0; i < n; i += 2) {
        f(j, 0, m) {
            cout << "#";
        }
    }
}


int main()
{
  {
      solve();
  }
}