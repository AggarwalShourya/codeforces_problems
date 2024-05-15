#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define f(i, a, b) for (ll i = a; i < b; i++)

void solve()
{
  vi arr(3);
  f(i,0,3){
    cin>>arr[i];
  }
    sort(arr.begin(),arr.end());
    cout<<(arr[1]-arr[0])+(arr[2]-arr[1]);

}

int main()
{
  ios_base::sync_with_stdio(false);
  cout.tie(NULL);
  cin.tie(NULL);
  {
      solve();
  }
}