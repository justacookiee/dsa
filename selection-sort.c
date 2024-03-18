#include<stdio.h>
#define SWAP(a, b, c) ((c) = (a), (a) = (b),  (b) = (c)) 
void print(int arr[], int n) {
	printf("[");
	for(int i = 0; i < n; i++) {
		printf("%d, ", arr[i]);
	}
	printf("]");
}
void selection_sort(int arr[], int n) {
	// select smallest from unsorted array and append to sorted array
	for(int i = 0; i < n - 1; i++) {
		int smallest = i;
		for(int j = i + 1; j < n; j++) {
			if(arr[smallest] > arr[j]) {
				smallest = j;
			}
		}
		int temp = 0;
		SWAP(arr[i], arr[smallest], temp);
	}
}
int main() {
	int arr[] = {10, 5 , 1, 3, 2, 4, 6};
	int n = sizeof(arr) / sizeof(arr[0]);
	printf("Before: ");

	print(arr, n);
	selection_sort(arr, n);
	printf("After: ");
	print(arr, n);
}
