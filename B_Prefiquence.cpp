#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define f(i, a, b) for (ll i = a; i < b; i++)

void solve() {
    ll n, m;
    cin >> n >> m;
    string a, b;
    cin >> a >> b;
    ll zeroes1 = 0, ones1 = 0;
    ll zeroes2 = count(b.begin(), b.end(), '0');
    ll ones2 = count(b.begin(), b.end(), '1');
    ll nums = -1;
    for (ll i = 0; i < n; i++) {
        if (a[i] == '0') zeroes1++;
        else if (a[i] == '1') ones1++;
        if (zeroes1 <= zeroes2 && ones1 <= ones2) {
            nums = i;
        }
    }
    cout << nums + 1 << endl;
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