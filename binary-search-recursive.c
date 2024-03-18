#include<stdio.h>
#define COMPARE(x, y) (((x) > (y))? 1: (((x) == (y))? 0: -1 ))
int binary_search(int arr[], int n, int left, int right) {
	int mid = (left + right) / 2;
	if(left > right)
		return -1;
	switch(COMPARE(arr[mid], n)) {
		case 1: binary_search(arr, n, left, mid - 1);
			break;
		case 0: return mid;
		case -1: binary_search(arr, n, mid + 1, right);
	}
}
int main() {
	int arr[] = {0,1,2,3,4,5,6,7,8,9};
	int len = sizeof(arr) / sizeof(arr[0]);
	printf("Enter element to find: ");
	int n;
	scanf("%d", &n);
	printf("Element found at location %d", binary_search(arr, n, 0, len - 1));
	return 0;
}
