#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define f(i, a, b) for (ll i = a; i < b; i++)

void solve()
{
    ll a, b;
    cin >> a >> b;
    ll nums = 0;
    vi vec(a);
    f(i, 0, a)
    {
        cin >> vec[i];
    }

    ll k, m;
    k = *max_element(vec.begin(), vec.end());
        m = -1;
    while (true)
    {
        f(i, 0, a)
        {
            if (vec[i] == k)
            {
                m = i;
                break;
            }
        }

        if (b - 1 < m)
        {
            if (vec[b - 1] > vec[b])
            {
                swap(vec[b - 1], vec[b]);
                nums++;
                if (b < m) 
                {
                    b++; 
                }
            }
            else
            {
                break; 
            }
        }
        else
        {
            break; 
        }
        if(b-1>m){
            swap(vec[b-1],vec[m]);
            f(i,0,m-1){
                if(vec[i]>vec[i+1]){
                    swap(vec[i],vec[i+1]);
                }
                else{
                    break;
                }
            }
            if(vec[m]<vec[m-1]){
                break;
            }
            if(vec[m]>vec[m+1]){
                swap(vec[m+1],vec[m]);
                nums++;
                if(m+1<b-1){
                    m++;
                }
            }
            else{
                break;
            }
      
        }
    }

    cout << nums << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    solve();
    return 0;
}
