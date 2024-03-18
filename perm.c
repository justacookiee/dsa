#include<stdio.h>
#define SWAP(a, b, c) ((c) = (a), (a) = (b), (b) = (c))
void perm(char arr[], int i, int n, int *count) {
	if(i == n) {
		for(int j = 0; j <= n; j++) {
			printf("%c", arr[j]);
		}
		(*count) += 1;
		printf("\n");
	} else {
		for(int j = i; j <= n; j++) {
			int t = 0;
			SWAP(arr[j], arr[i], t);
			perm(arr, i + 1, n, count);
			SWAP(arr[j], arr[i], t);
		}
	}
}
int main() {
	char arr[] = {'a', 'b', 'c', 'd', 'e'};
	int count = 0;
	int n = sizeof(arr) / sizeof(arr[0]) - 1;
	perm(arr, 0, n, &count);
	printf("Count = %d\n", count);
	return 0;
}
