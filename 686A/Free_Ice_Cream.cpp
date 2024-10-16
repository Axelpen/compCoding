#include <bits/stdc++.h>



typedef long long ll;

using namespace std;
int main()
{
    ll n, x, d;

    ll s = 0;

    char ch;
    cin >> n >> x;
    for (ll i = 0; i < n; i++)
    {
        cin >> ch >> d;
        if (ch == '-')
        {
            if (d <= x)
            {
                x = x-d;
                continue;
            }
            s++;
            continue;
        }
        else if (ch == '+')
        {
            x = x+d;
            continue;
        }
    }
    cout << x <<" "<< s << endl;
}
