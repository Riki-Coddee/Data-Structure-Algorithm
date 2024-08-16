#include <iostream>
#include <vector>
#include <set>
using namespace std;

#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int, int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a; i<b; i++)

int n, e;
const int N = 1e5 + 3;
vector<pii> g[N];  // Changed from vector<vector<int>> to vector<pii> for adjacency list
int cost = 0;
vi dist(N), parent(N);
vector<bool> vis(N);
const int INF = 1e9;

void primsMST(int source) {
    rep(i, 0, N) {
        dist[i] = INF;
    }
    set<pii> s;  // Changed to set<pii> for correct ordering
    dist[source] = 0;
    s.insert({0, source});
    
    while (!s.empty()) {
        auto x = *(s.begin());
        s.erase(s.begin());
        int u = x.second;
        vis[u] = true;
        int v = parent[u];
        int w =x.first;
        cost += w;
        cout<<u<<" "<<v<<" "<<w<<endl;
        for (auto it : g[u]) {
            int v = it.first;
            int w = it.second;
            if (vis[v]) continue;

            if (dist[v] > w) {
                s.erase({dist[v], v});
                dist[v] = w;
                s.insert({dist[v], v});
                parent[v] = u;
            }
        }
    }
}

int main() {
    cin >> n >> e;
    rep(i, 0, e) {
        int u, v, w;
        cin >> u >> v >> w;
        g[u].push_back({v, w});
        g[v].push_back({u, w});
    }

    primsMST(0);
    cout << cost << endl;
    return 0;
}
