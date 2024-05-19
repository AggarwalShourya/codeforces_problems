#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define f(i, a, b) for (ll i = a; i < b; i++)
#define pii pair<ll,ll>
#define vpi vector<pair<ll,ll>>
#define vvi vector<vector<ll>>
#define in(v) f(i,0,v.size()) cin >> v[i]
#define all(x) x.begin(), x.end()
#define srt(v) sort(v.begin(), v.end())

const ll m1 = 1e9 + 7;
using namespace std;

void solve() {
    ll n;
    cin >> n;
    vi vec(n);
    in(vec);

    ll power = 0;
    vi powers;

    f(i, 0, n) {
        ll num = vec[i];
        ll local_power = 0;
        while (num % 2 == 0) {
            num /= 2;
            local_power++;
        }
        power += local_power;
        powers.push_back(local_power);
    }

    if (power >= n) {
        cout << 0 << endl;
        return;
    }

    vector<ll> increments;
    for (ll i = 1; i <= n; i++) {
        ll inc = 0;
        ll temp = i;
        while (temp % 2 == 0) {
            temp /= 2;
            inc++;
        }
        increments.push_back(inc);
    }

    sort(increments.rbegin(), increments.rend());

    ll operation = 0;
    for (ll i = 0; i < increments.size(); i++) {
        power += increments[i];
        operation++;
        if (power >= n) {
            cout << operation << endl;
            return;
        }
    }

    cout << -1 << endl;
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
}
