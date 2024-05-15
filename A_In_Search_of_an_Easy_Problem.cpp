#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define f(i, a, b) for (ll i = a; i < b; i++)

void solve()
{   int count=0;
    int n;
    cin>>n;
  vi arr(n);
 f(i,0,n){
    cin>>arr[i];
 }
    f(i,0,n){
       count+=arr[i];
    }
    if(count==0){
        cout<<"EASY";

    }
    else{
        cout<<"HARD";
    }

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