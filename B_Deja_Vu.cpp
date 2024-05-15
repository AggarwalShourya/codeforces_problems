#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define f(i, a, b) for (ll i = a; i < b; i++)

void solve()
{
    ll n;
    cin >> n;
    ll q;
    cin >> q;
    vi a(n);
    vi x(q);
    f(i, 0, n)
    {
        cin >> a[i];
    }
    f(i, 0, q)
    {
        cin >> x[i];
    }
    ll hash[30]={0};
    f(i, 0, q)
    { if(hash[x[i]-1]==0)
{        f(j, 0, n)
        {
            if (a[j] % static_cast<ll>(pow(2, x[i])) == 0)
            {
                a[j] = a[j] + static_cast<ll>(pow(2, x[i] - 1));
            }
        }
    }
    hash[x[i]-1]=1;
    }
    f(i, 0, n)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
