#include<stdio.h>
#include<stdlib.h>
/* int** init_matrix(int n, int m) {
	int* col = malloc(n * m * sizeof(int));
	int** rows = malloc(m * sizeof(int* ));
	for(int i = 0; i < m; i++) {
		*(rows + i) = col + n * i;
	}
	return rows;
}
*/
int** init_matrix(int n, int m) {
	int** matrix;
	matrix = malloc(m * sizeof(*matrix));
	for(int i = 0; i < m; i++) {
		*(matrix + i) = malloc(n * sizeof(**matrix));
	}
	return matrix;
}
void update(int** mat, int n, int m) {
	int iter = 1;
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < n; j++) {
			mat[i][j] = iter++;
		}
	}
}
void print(int** mat, int n, int m) {
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < n; j++) {
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
}

int main() {
	int n = 4, m = 2;
	int** mat = init_matrix(n, m);
	update(mat, n, m);
	print(mat, n, m);
	return 0;
}
