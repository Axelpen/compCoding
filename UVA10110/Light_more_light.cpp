#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    vector<string> full;
    while (cin >> n)
    {
        if (n == 0)
        {
            break;
        }
        bool on = false;
        for (int i = 1; i < n; i++)
        {
            if (n % i == 0)
            {
                on = !on;
            }
        }
        if (on == true)
            full.push_back("no");
        else
            full.push_back("yes");
    }

    for (string s : full)
    {
        cout << s << endl;
    }
}