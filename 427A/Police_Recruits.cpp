#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, officer, buffer, crime=0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> buffer;
        if (buffer > 0)
        {
            officer = officer+buffer;
        }
        else
        {
            if (officer > 0)
            {
                officer--;
            }
            else
            {
                crime++;
            }
        }
    }
    cout << crime;
}