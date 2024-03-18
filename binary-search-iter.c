#include<stdio.h>
#define COMPARE(a, b) (((a) > (b))? 1: (((a) == (b))? 0: -1))
int binary_search(int arr[], int n, int left, int right);
int main() {
	int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8};
	int len = sizeof(arr) / sizeof(arr[0]);
	printf("Enter which element to search for: ");
	int n;
	scanf("%d", &n);
	int t = binary_search(arr, n, 0, len - 1);
	printf("Location: %d\n", t);
	return 0;
}
int binary_search(int arr[], int n, int left, int right) {
	int mid;
	while(left <= right) {
		mid = (left + right) / 2;
		switch(COMPARE(arr[mid], n)) {
			case 1: right = mid - 1; break;
			case 0: return mid;
			case -1: left = mid + 1;
		}
	}
	return -1;
}	
