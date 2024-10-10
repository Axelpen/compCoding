#include <bits/stdc++.h>

using namespace std;

const int INF = INT_MAX;

const int N = 10;
bool ready[N];
int value[N];
int coins[] = {5, 4, 2, 1};

int solve(int x)
{
    if (x < 0)
        return INF;
    if (x == 0)
        return 0;
    if (ready[x])
        return value[x];
    int best = INF;
    for (auto c : coins)
    {
        best = min(best, solve(x - c) + 1);
    }
    value[x] = best;
    ready[x] = true;
    return best;
}

int main()
{
    solve(50);
    for(int i = 0;i <= N; i++)
    {
        cout << value[i];
    }
}
