#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define f(i, a, b) for (ll i = a; i < b; i++)

void solve()
{
    int n, l, k;
    cin >> n >> l >> k;
    vi vec(n);
    f(i,0,n){
        cin>>vec[i];
    }
    
    bool found = false; 
    for(int i=0;i<n;i++){
        bool rain=true;
        for(int j=max(0,i-l);j<i;j++){
            if(vec[i]>=vec[j]){
                rain=false;
                break;
            }
        }
        for(int j=i+1;j<min(n,i+k+1);j++){
            if(vec[i]>=vec[j]){
                rain=false;
                break;
            }
        }
        if(rain){
            cout<<i+1<<endl;
            found = true;
            break;
        }
    }
    

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve(); 
    return 0;
}
