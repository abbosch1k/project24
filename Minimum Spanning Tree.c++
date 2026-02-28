#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Edge {
    int u, v, w;
};

int parent[100005];

int find(int x) {
    if (parent[x] == x)
        return x;
    return parent[x] = find(parent[x]);
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<Edge> edges(m);

    for (int i = 0; i < n; i++)
        parent[i] = i;

    for (int i = 0; i < m; i++)
        cin >> edges[i].u >> edges[i].v >> edges[i].w;

    sort(edges.begin(), edges.end(), [](Edge a, Edge b) {
        return a.w < b.w;
    });

    int mstWeight = 0;

    for (auto e : edges) {
        int pu = find(e.u);
        int pv = find(e.v);

        if (pu != pv) {
            parent[pu] = pv;
            mstWeight += e.w;
        }
    }

    cout << mstWeight;
}
