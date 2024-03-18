#include<stdio.h>
#include<stdlib.h>

#define MALLOC(p, s) \
	if(!(p = malloc(s))) { \
		fprintf(stderr, "Insufficient memory"); \
		exit(EXIT_FAILURE); \
	}
int main() {
	int* i;
	MALLOC(i, sizeof(int));
	*i = 5;
	printf("%d\n", *i);

	float* j = (float* )i;
	*j = 10.0;
	printf("%f, %d\n",*j, *i );
}
// freeing pointers is tricky
// you only free the last one of the pointer.
