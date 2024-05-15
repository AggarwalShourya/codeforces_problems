#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define f(i, a, b) for (ll i = a; i < b; i++)

void solve()
{
    string s;
    cin>>s;
    s.erase(remove(s.begin(),s.end(),'a'),s.end());
    s.erase(remove(s.begin(),s.end(),'e'),s.end());
    s.erase(remove(s.begin(),s.end(),'i'),s.end());
    s.erase(remove(s.begin(),s.end(),'o'),s.end());
    s.erase(remove(s.begin(),s.end(),'u'),s.end());
    s.erase(remove(s.begin(),s.end(),'A'),s.end());
    s.erase(remove(s.begin(),s.end(),'E'),s.end());
    s.erase(remove(s.begin(),s.end(),'I'),s.end());
    s.erase(remove(s.begin(),s.end(),'O'),s.end());
    s.erase(remove(s.begin(),s.end(),'U'),s.end());
    s.erase(remove(s.begin(),s.end(),'y'),s.end());
    s.erase(remove(s.begin(),s.end(),'Y'),s.end());
    // I am getting tr after using tour as a testcase 
    for(int i=0;i<s.length();i+=2){
      s.insert(i,".");
    }
    f(i,0,s.length()){
      s[i]=tolower(s[i]);
    }
    cout<<s;

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