#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define f(i, a, b) for (ll i = a; i < b; i++)

void solve()
{
    vi vec(4);
    ll sum = 0;
    f(i, 0, 4){
        cin >> vec[i];
        sum += vec[i];
    }

    ll mid_val = sum / 3; 

    f(i, 0, 4){
        if (vec[i] != mid_val){
            cout << mid_val - vec[i] << endl;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
  
    solve();

    return 0;
}
