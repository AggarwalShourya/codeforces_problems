#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define f(i, a, b) for (ll i = a; i < b; i++)

void solve()
{
  ll n;
  ll nums=0;
  cin>>n;
  vi vec(n);
  f(i,0,n){
    cin>>vec[i];
  }
  vi vec1(n);
//   f(i,0,n){
//     for(int j=i+1;j<n;j++){
//     if(vec[i]==vec[j]){
//         nums++;
//     }
//     // else{
//     //     break;
//     // }
//   }
//   }
// cout<<nums<<endl;
f(i,0,n){
    vec1[vec[i]-1]+=1;
}
f(i,0,n){
    if(vec1[i]==2){
        nums++;
    }
}
cout<<nums<<endl;
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