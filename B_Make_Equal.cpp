#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define vi vector<int>
#define f(i, a, b) for (ll i = a; i < b; i++)
 
void solve() {
    ll n;
    cin>>n;
    ll count = 0;
    vi vec(n);
    ll mean=0;
    f(i,0,n)    
    {
        cin>>vec[i];
        mean = mean + vec[i];
    }
    mean = mean/n;
    f(i,0,n)
    {
        count = count + (vec[i]-mean);
        
        if(count<0)
        {
            cout<<"NO"<<endl;
            return;
        }
    }
 
    cout<<"YES"<<endl;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    ll t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
 
    return 0;
}