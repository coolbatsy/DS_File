#include <stdio.h>
#include <stdlib.h>

struct Node {
    int vertex;
    struct Node* next;
};

int main() {
    struct Node* adj[5];
    int i, j, e, u, v;

    printf("Implementing Adjacency List\n");
    for (i = 0; i < 5; i++) adj[i] = NULL;

    printf("Enter number of edges: ");
    scanf("%d", &e);

    printf("Enter edges (u v) for 5 vertices (0-4):\n");
    for (i = 0; i < e; i++) {
        scanf("%d %d", &u, &v);
        struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
        temp->vertex = v;
        temp->next = adj[u];
        adj[u] = temp;
    }

    printf("Adjacency List:\n");
    for (i = 0; i < 5; i++) {
        printf("%d -> ", i);
        struct Node* p = adj[i];
        while (p != NULL) {
            printf("%d -> ", p->vertex);
            p = p->next;
        }
        printf("NULL\n");
    }
    return 0;
}