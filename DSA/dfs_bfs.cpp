#include <iostream>
#include <queue>
using namespace std;

const int N = 4;
bool visited[N];
int adj_matrix[N][N] = {
    {0, 1, 1, 0},
    {1, 0, 0, 1},
    {1, 0, 0, 1},
    {0, 1, 1, 0}
};

void DFS(int node) {
    cout << node << " ";
    visited[node] = true;
    for (int i = 0; i < N; i++) {
        if (adj_matrix[node][i] && !visited[i])
            DFS(i);
    }
}

void BFS(int node) {
    queue<int> q;
    q.push(node);
    visited[node] = true;
    while (!q.empty()) {
        int current = q.front();
        cout << current << " ";
        q.pop();
        for (int i = 0; i < N; i++) {
            if (adj_matrix[current][i] && !visited[i]) {
                q.push(i);
                visited[i] = true;
            }
        }
    }
}

int main() {
    int starting_node = 0;
    cout << "DFS traversal: ";
    for (int i = 0; i < N; i++) visited[i] = false;
    DFS(starting_node);
    cout << endl;
    cout << "BFS traversal: ";
    for (int i = 0; i < N; i++) visited[i] = false;
    BFS(starting_node);
    cout << endl;
    return 0;
}
