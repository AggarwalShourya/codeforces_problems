#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define f(i, a, b) for (ll i = a; i < b; i++)

void solve() {
    ll n;
    cin >> n;
    int arr[n];
    int jkl[n];
    bool flag = true;
    f(i, 0, n) {
        cin >> arr[i];
    }
    f(i, 0, n) {
        if (arr[i] % 2 == 0) {
            jkl[i] = arr[i] / 2;
        } else {
            if (flag == true) { 
                jkl[i] = ceil(arr[i] / 2.0);
                flag = false;
            } else if (flag == false) { 
                jkl[i] = floor(arr[i] / 2.0);
                flag = true;
            }
        }
    }
    f(i, 0, n) {
        cout << jkl[i] << endl;
    }
}

int main() {
    solve();
    return 0;
}
