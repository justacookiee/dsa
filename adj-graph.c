#include "graph.c"
int** init_mat(int n, int m) {
	int* values = malloc(n * m * sizeof(int));
	int** rows = malloc(m * sizeof(int*));
	for(int i = 0; i < m; i++) {
		rows[i] = values + i * n;
	}
	return rows;
}
int** adj_matrix(struct Node* Graph[], int n) {
	int** matrix = init_mat(n, n);
	struct Node* curr;
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
			matrix[i][j] = 0;
	for(int i = 0; i < n; i++) {
		curr = Graph[i];
		while(curr -> next != NULL) {
			curr = curr -> next;
			matrix[i][curr -> data] = 1;
		}
	}
	return matrix;
}

void draw_adj(int** matrix, int n) {
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}
}
int main() {
	int n = 3;
	struct Node* Graph[n];
	init(Graph, n);
	pushEdge(Graph, 0, 1);
	pushEdge(Graph, 1, 0);
	pushEdge(Graph, 1, 2);
	draw(Graph, n);
	int** matrix = adj_matrix(Graph, n);
	draw_adj(matrix, n);
	return 0;
}
