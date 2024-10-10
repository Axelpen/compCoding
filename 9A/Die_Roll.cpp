#include <bits/stdc++.h>
using namespace std;

int main() {
    int y, w;
    cin >> y >> w;


    int first, second;
    if (y > w) first = 6 - (y - 1);
    else first = 6 - (w - 1);
    second = 6;

    int divisor = std::gcd(first, second);
    first /= divisor;
    second /= divisor;

    cout << first << "/" << second << endl;

    return 0;
}
