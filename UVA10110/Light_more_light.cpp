#include <bits/stdc++.h>

using namespace std;

int main()
{
    unsigned int n;
    while (cin >> n)
    {
        if (n == 0)
        {
            break;
        }

        unsigned int buffer = (int) sqrt(n);
        if(buffer*buffer == n) cout << "yes" << endl;
        else cout << "no" << endl;

    }
    return 0;
}