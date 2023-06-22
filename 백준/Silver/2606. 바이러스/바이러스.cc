
#include <stdio.h>
#include <stdbool.h>

#define MAX_COMPUTERS 101

bool visited[MAX_COMPUTERS] = { false };
bool network[MAX_COMPUTERS][MAX_COMPUTERS] = { false };

void dfs(int start, int n) {
    visited[start] = true;

    for (int i = 1; i <= n; i++) {
        if (network[start][i] && !visited[i]) {
            dfs(i, n);
        }
    }
}

int main() {
    int n, m;
    scanf("%d", &n);
    scanf("%d", &m);

    for (int i = 0; i < m; i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        network[a][b] = network[b][a] = true;
    }

    dfs(1, n);

    int result = 0;
    for (int i = 2; i <= n; i++) {
        if (visited[i]) {
            result++;
        }
    }

    printf("%d\n", result);

    return 0;
}
