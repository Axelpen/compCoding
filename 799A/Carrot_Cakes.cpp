#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,t,k,d,buffer=0;
    int one,two,time = 0,time2=0;
    bool secondActive = false;
    cin >> n >> t >> k >> d;
    while(buffer < n){
        time++;
        if(time % t == 0)
        {
            buffer +=k;
        }
        one=time;
    }
    buffer = 0;
    time=0;
    while(buffer < n){
        time++;
        if(time % d == 0 && secondActive == false){
            secondActive = true;
            time2 = 0;
        }
        else if(time2 % t == 0 && secondActive == true){
            buffer +=k;
        }
        if(time % t == 0)
        {
            buffer +=k;
        }
        time2++;
        two = time;

    }
    if(one <= two) cout << "NO" << endl;
    else cout << "YES" << endl;
    return 0;

}   