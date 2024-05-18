#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define f(i, a, b) for (ll i = a; i < b; i++)
const ll m1 = 1e9 + 7;
int hi(int x){
    int y=log2(x);
    int z=1<<(y+1);
    return z-x;
}
void solve()
{
ll n;
cin>>n; 
int a[n];
f(i,0,n){
  cin>>a[i];
}
cout<<n<<endl;
for(int i=0;i<n;i++){
    cout<<i+1<<" "<<hi(a[i])<<endl; 
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