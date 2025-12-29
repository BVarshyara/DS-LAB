#include <stdio.h>
int n, i, j, a[10][10], vis[10];

void bfs(int v) {
    int q[10], f = 0, r = 0;
    q[r] = v;
    vis[v] = 1;
    printf("Nodes reachable from the source vertex %d: ", v);
    while (f <= r) {
        int u = q[f];
        printf("%d ", u);
        for (i = 1; i <= n; i++) {
            if (a[u][i] == 1 && vis[i] == 0) {
                r++;
                q[r] = i;
                vis[i] = 1;
            }
        }
        f++;
    }
    printf("\n");
}

int main() {
    int src;
    printf("Enter the number of vertices: ");
    scanf("%d", &n);
    printf("Enter the adjacency matrix:\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            scanf("%d", &a[i][j]);
        }
        vis[i] = 0;
    }
    printf("Enter the source vertex: ");
    scanf("%d", &src);
    bfs(src);
    return 0;
}
