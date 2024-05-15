#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define f(i, a, b) for (ll i = a; i < b; i++)
void solve() {
 ll n;
    cin>>n;
    string s;
    cin>>s;
    string rev=s;
    reverse(rev.begin(),rev.end());
    if(s<=rev){
        if(n%2==0){
            cout<<s<<"\n";
        }
        else{
            cout<<s<<rev<<"\n";
        }
    }
    else{
        if(n%2==1){
            cout<<rev<<"\n";
        }
        else{
            cout<<rev<<s<<"\n";
        }
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
