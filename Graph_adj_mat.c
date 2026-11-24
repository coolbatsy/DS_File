#include <stdio.h>

int main() {
    int adj[5][5] = {0}, i, j, e, u, v;

    printf("Implementing Adjacency Matrix\n");
    printf("Enter number of edges: ");
    scanf("%d", &e);

    printf("Enter edges (u v) for 5 vertices (0-4):\n");
    for (i = 0; i < e; i++) {
        scanf("%d %d", &u, &v);
        adj[u][v] = 1;
        adj[v][u] = 1; // Undirected graph
    }

    printf("Adjacency Matrix:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d ", adj[i][j]);
        }
        printf("\n");
    }
    return 0;
}