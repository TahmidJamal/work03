#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {

	srand( time(NULL) );

	int ray[10];
	int roy[10];

	for (int i = 0; i < 9; i++) {
		ray[i] = rand();
	}
	ray[9] = 0;

	printf("printing out values of first array\n");
	for (int i = 0; i < 10; i++) {
		printf("%d\n", ray[i] );
	}

	//make roy the same as ray backwards
	for(int i = 0; i < 10 ; i++) {
		*(roy + i) =*(ray + 9 - i) ;
	}

	printf("printing out values of second array (should be reversed)\n");
	for (int i = 0; i < 10; i++) {
		printf("%d\n", roy[i] );
	}

	return 0;
}