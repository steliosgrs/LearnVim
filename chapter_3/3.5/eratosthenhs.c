#include <stdio.h>
#include <stdlib.h>
//#define N 10000 // Static

int main(int argc, char *argv[]){
	//int i,j,a[N]; // Static
	
	long int i,j, N = atoi(argv[1]); // Dynamic
	int *a = malloc(N*sizeof(int));

	for(i = 2; i < N; i++) a[i] = 1;
	for(i = 2; i < N; i++) 
		if(a[i])
			for(j=i; j <N/i; j++) a[i*j] = 0;
	for(i = 2; i < N; i++)
		if(a[i]) printf("%4ld ",i);
	printf("\n");
}
