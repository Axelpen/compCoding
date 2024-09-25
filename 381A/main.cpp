#include <bits/stdc++.h>
using namespace std;

int main() {
    int ser = 0, dim = 0, n = 0, turn = 0;

    cin >> n;
    int cards[n];

    for (int i = 0; i < n; i++) {
        cin >> cards[i];
    }

    int l = 0, r = n - 1; // Use n - 1 for the right index

    while (l <= r) { // Change the loop to continue while l is less than or equal to r
        if (cards[l] < cards[r]) {
            if (turn % 2 == 0) {
                ser += cards[r];
            } else {
                dim += cards[r];
            }
            turn++;
            r--;
        } else {
            if (turn % 2 == 0) {
                ser += cards[l];
            } else {
                dim += cards[l];
            }
            turn++;
            l++;
        }
    }

    cout << ser << " " << dim << endl;
    return 0;
}
