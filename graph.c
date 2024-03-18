#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node* next;	
};
struct Node* createNode(int data) {
	struct Node* newNode = (struct Node* )malloc(sizeof(struct Node));
	newNode -> data = data;
	newNode -> next = NULL;
	return newNode;
}
void init(struct Node* Graph[], int n) {
	for(int i = 0; i < n; i++) {
		Graph[i] = createNode(i);
	}
}
void pushEdge(struct Node* Graph[], int i, int j) {
	struct Node* newNode = createNode(j);
	struct Node* temp = Graph[i] -> next;
	Graph[i] -> next = newNode;
	newNode -> next = temp;	
}
void draw(struct Node* Graph[], int n) {
	for(int i = 0; i < n; i++) {
		printf("[%d]", i);
		struct Node* curr = Graph[i];
		while(curr -> next != NULL) {
			curr = curr -> next;
			printf(" -> %d", curr -> data);
		}
		printf("\n");
	}
}
			
	    	
//int main() {
//	int n = 3;
//	struct Node* Graph[n];
//	init(Graph, n);
//	pushEdge(Graph, 0, 1);
//	pushEdge(Graph, 1, 0);
//	pushEdge(Graph, 1, 2);
//	draw(Graph, n);
//	return 0;
//}
