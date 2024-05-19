#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define f(i,a,b) for(ll i=a;i<b;i++)
#define pii pair<ll,ll>
#define vpi vector<pair<ll,ll>>
#define vvi vector<vector<ll>>
#define in(v) f(i,0,v.size()) cin>>v[i]
#define all(x) x.begin(),x.end()
#define srt(v) sort(v.begin(),v.end())
#define pb push_back

const ll m1=1e9+7;
using namespace std;

void solve(){
    ll a,b,c;
    cin>>a>>b>>c;
    ll sum=a+b+c;
    if(sum%9==0){
        if((sum/9)<=min(a,min(b,c))){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }else{
        cout<<"NO"<<endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
