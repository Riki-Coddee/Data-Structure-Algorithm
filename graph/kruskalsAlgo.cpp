#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int, int>
#define vii vector<pii>

const int N = 1e5 + 6;
vector<int> parent(N);
vector<int> sz(N);

void make_sets(int v) {
    parent[v] = v;
    sz[v] = 1;
}

int find_sets(int v) {
    if (v == parent[v]) return v;
    return parent[v] = find_sets(parent[v]);
}

void make_union(int a, int b) {
    int x = find_sets(a);
    int y = find_sets(b);

    if (x != y) {
        if (sz[x] < sz[y]) swap(x, y);
        parent[y] = x;
        sz[x] += sz[y];
    }
}

int main() {
    for (int i = 0; i < N; ++i) {
        make_sets(i);
    }

    int n, e;
    cin >> n >> e;

    vector<vector<int>> edges;
    for (int i = 0; i < e; ++i) {
        int u, v, w;
        cin >> u >> v >> w;
        edges.push_back({w, u, v});
    }

    sort(edges.begin(), edges.end());

    int cost = 0;
    for (auto i : edges) {
        int w = i[0];
        int u = i[1];
        int v = i[2];
        int x = find_sets(u);
        int y = find_sets(v);

        if (x != y) {
            cout << u << " " << v << "\n";
            cost += w;
            make_union(u, v);
        }
    }

    cout << cost << endl;
    return 0;
}
