#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> hs;
    int value,n=0;


    while (cin >> value) {
        hs.push_back(value);
    }
    sort(hs.begin(), hs.end());

    for(int i = 0; i < hs.size() -1; i++) {
        if(hs[i] == hs[i+1]) n++;
    }
    cout << n;
}
