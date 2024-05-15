#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define f(i, a, b) for (ll i = a; i < b; i++)

void solve()
{
    int x[5][5];
    for (int i = 0; i <5; ++i)
    {
        for (int j = 0; j < 5; ++j)
        {
            cin >> x[i][j];
            if (x[i][j] == 1)
            {
                cout << abs(i - 2) + abs(j - 2) << endl;
            }
        }
    }
}

int main()
{
 
  {
      solve();
  }
}