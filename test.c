#include <stdio.h>
#include "Vector.h"

void printVector(vector *v)
{
	for(int i = 0; i < v->size; i++)
	{
		printf("Vector %d: %d\n", i, v->arr[i]);
	}
}	

int main()
{
	vector *v = initVector();
	printf("Initializing vector...n");
	for(int i = 0; i < 20; i++)
		insertVector(v, i, i*3 + 1);
	printVector(v);

	printf("\nAccessor Methods:\n");
	printf("atVector(v, 5): %d\n", atVector(v, 5));
	printf("frontVector(v): %d\n", frontVector(v));
	printf("backVector(v): %d\n", backVector(v));
	printf("dataVector(v): %p\n", dataVector(v));

	printf("\nModifier Methods:\n");
	printf("assignVector(v, 2, 69)\n"); assignVector(v, 2, 69);
	printf("popBackVector(v)\n"); popBackVector(v);
	printf("pushBackVector(v, 420)\n"); pushBackVector(v, 420);
	printf("insertVector(v, 0, 74)\n"); insertVector(v, 0, 74);
	printf("eraseVector(v, 6)\n\n"); eraseVector(v, 6);

	printVector(v);
	freeVector(v);

	vector *v1 = initVector(), *v2 = initVector();
	pushBackVector(v1, 28); pushBackVector(v2, 29);
	pushBackVector(v1, 332);
	printf("\nVector 1: %p\nVector 2: %p\n", v1->arr, v2->arr);
	printf("Swapping Vectors...\n"); swapVector(v1, v2);
	printf("Vector 1: %p\nVector 2: %p\n", v1->arr, v2->arr);
	freeVector(v1);
	freeVector(v2);
}	
