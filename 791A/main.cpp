#include <bits/stdc++.h>
using namespace std;

int l,b,n;
int main() {
    cin >> l >> b;
    while (l <= b)
    {
        n++;
        l = l*3;
        b = b*2;
    }
    cout << n;
}