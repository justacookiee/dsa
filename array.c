#include<stdio.h>
#include<stdlib.h>
int* init_arr(int n) {
	int* values = malloc(sizeof(int) * n);
	for(int i = 0; i < n; i++) {
		*(values + i) = i + 1;
	}
	return values;
}
int main() {
	int n = 5;
	int* arr = init_arr(n);
	for(int i = 0; i < n; i++) {
		printf("%d ", *(arr + i));
	}
	printf("\n");
	return 0;
}

