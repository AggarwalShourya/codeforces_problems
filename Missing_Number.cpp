#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define f(i, a, b) for (ll i = a; i < b; i++)

void solve()
{
 ll n;
 cin>>n;
 vi vec(n-1);
 f(i,0,n-1){
    cin>>vec[i];
 }
 sort(vec.begin(),vec.end());
 int hash[n]={};
 ll nums=0;
 f(i,0,n-1){
   hash[vec[i]];
 }
f(i,0,n){
    if(hash[i]==0){
        cout<<i;
    }
}
// cout<<nums;

}

int main()
{
  ios_base::sync_with_stdio(false);
  cout.tie(NULL);
  cin.tie(NULL);
//   ll t = 1;
//   cin>>t;
//   while(t--)
  {
      solve();
  }
}