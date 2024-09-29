#include <bits/stdc++.h>
using namespace std;

const int INF = INT_MAX;

int main() {
    vector<tuple<int, int, int>> edges; // Change char to int for vertex representation
    int n = 5; // Number of vertices
    int x = 1; // Starting vertex (1-indexed)
    vector<int> distance(n + 1, INF); // Distance array

    // Adding edges (a, b, weight)
    edges.push_back({1, 2, 1});
    edges.push_back({2, 4, 5});
    edges.push_back({5, 3, 5});
    edges.push_back({2, 3, 6});
    edges.push_back({5, 4, 8});
    edges.push_back({5, 2, 7});
    edges.push_back({7, 1, 7});
        edges.push_back({1
        , 6, 7});

    // Initialize the distance to the starting vertex
    distance[x] = 0;

    // Bellman-Ford algorithm
    for (int i = 1; i <= n - 1; i++) {
        for (auto e : edges) {
            int a, b, w;
            tie(a, b, w) = e;
            if (distance[a] != INF) { // Check if a is reachable
                distance[b] = min(distance[b], distance[a] + w);
            }
        }
    }

    // Output the results
    cout << "Vertex Distance from Source (" << x << "):" << endl;
    for (int i = 1; i <= n; i++) {
        if (distance[i] == INF) {
            cout << "Vertex " << i << ": INF" << endl; // Unreachable
        } else {
            cout << "Vertex " << i << ": " << distance[i] << endl;
        }
    }

    return 0;
}
