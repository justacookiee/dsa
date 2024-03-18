#include<stdio.h>
int horner(int arr[], int i, int n, int x) {
	if(i == n)
		return arr[n];
	return arr[i] + x * horner(arr, i + 1, n, x);
}
int main() {
	int arr[] = {5, 4, 3};
	int n = sizeof(arr) / sizeof(arr[0]) - 1;
	printf("Horner: %d\n", horner(arr, 0, n, 2));
	return 0;
}
