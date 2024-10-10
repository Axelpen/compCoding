#include <bits/stdc++.h>
using namespace std;
int main() {
    int buffer=0,n,b,d,ora,empty = 0;
    cin >> n >> b >> d;
    for(int i = 0; i < n;i++){
        cin >> ora;

        if(ora > b) continue;
        buffer = buffer + ora;
        if(buffer > d){
            empty++;
            buffer = 0;
        }
    }
    cout << empty;
    return 0;
}