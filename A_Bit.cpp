#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define f(i, a, b) for (ll i = a; i < b; i++)

void solve()
{   int X=0;
    char s[3];
    int n;
  cin>>n;
  while (n--){
    f(i,0,3){
      cin>>s[i];
    }
  if(s[1]=='+'){
    ++X;
  } 
  if(s[1]=='-'){
    --X;}
     
     }
cout<<X;
 }

int main()
{
      solve();
}