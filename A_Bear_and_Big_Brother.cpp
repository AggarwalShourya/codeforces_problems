#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define f(i, a, b) for (ll i = a; i < b; i++)

void solve()
{
  int a;
  int b;
  cin>>a;
  cin>>b;
  int n=0;
 while(a<=b){
    a*=3;
    b*=2;
    n++;
 }
 cout<<n;
 




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