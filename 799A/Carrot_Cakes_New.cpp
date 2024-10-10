#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,t,k,d;
    cin >> n >> t >> k >> d;
    int time = 0;

    while(time <= d ){
        n -= k;
        time+=t;
    }
        if (n > 0) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}

//Saw this insanely smart Solution on some Blog post, tried to implement it after reading it.
// This is way better than my solution => 93ms vs 62ms.