#include <bits/stdc++.h>
using namespace std;
int main() {
    int count,n;
    string str;

    cin >> n >> str;

    for(int i = 0;i < n-1;i++)
    {
        if(str[i] == str[i+1])
        {
            count++;
        }
    }
    cout << count << endl;
}