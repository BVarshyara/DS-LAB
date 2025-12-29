#include <stdio.h>
int n, a[10][10], vis[10];

void dfs(int v) {
    vis[v] = 1;
    for (int j = 1; j <= n; j++) {
        if (a[v][j] == 1 && vis[j] == 0) {
            dfs(j);
        }
    }
}

int main() {
    int i, j, connected = 1;
    printf("Enter the number of vertices: ");
    scanf("%d", &n);
    printf("Enter the adjacency matrix:\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            scanf("%d", &a[i][j]);
        }
        vis[i] = 0;
    }
    dfs(1);
    for (i = 1; i <= n; i++) {
        if (vis[i] == 0) {
            connected = 0;
            break;
        }
    }
    if (connected)
        printf("Graph is connected\n");
    else
        printf("Graph is NOT connected\n");
    return 0;
}
