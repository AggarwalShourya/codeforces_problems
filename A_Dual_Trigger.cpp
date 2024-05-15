#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define f(i, a, b) for (ll i = a; i < b; i++)

void solve() {
    ll n;
    ll a = 0;
    ll b = 0;
    cin >> n;
    string s;
    cin >> s;
    f(i, 0, s.length()) {
        if (s[i] == '1') {
            a++;
        }
        if (s[i] == '0') {
            b++;
        }
    }
    if (a % 2 != 0) {
        cout << "NO" << endl;
    } else if (a == 2) {
        bool valid = true;
        f(i, 0, s.length() - 1) {
            if (s[i] == '1' && s[i + 1] == '1') {
                valid = false;
                break;
            }
        }
        if (valid) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    } else {
        cout << "YES" << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    ll t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
