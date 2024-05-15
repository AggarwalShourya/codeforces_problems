#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define f(i, a, b) for (ll i = a; i < b; i++)

void solve()
{
  ll n;
  cin>>n;
  vi vec(n);
  f(i,0,n){
    cin>>vec[i];
  }
    ll pos=0;
    ll nig=0;
    f(i,0,n){
        if(vec[i]<0){
            pos++;
        }
        if(vec[i]==0){
            nig++;
        }
    }
        if(nig!=0){
            cout<<"0"<<endl;
        }
        else{
        if(pos%2==0){
            cout<<"1"<<endl;
            cout<<"1"<<" "<<"0"<<endl;
        }
        if(pos%2!=0){
            cout<<"0"<<endl;
        }
    }
    




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