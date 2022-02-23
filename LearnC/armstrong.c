//gcc armstrong.c -o armstrong -lm

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int getDigits(int);
int isArmstrong(int);

int getDigits(int n){
	int digits=0;
	while ( n > 0){
		n = n / 10;
	        digits++;
	}
	return digits;
}

int isArmstrong(int n){
	int sum =0, temp = n;
	int digits = getDigits(n);
	while(n>0){
		sum += pow(n%10,digits);
		n = n/10;
	}
	return sum == temp;
}
int main(int argc, char *argv[]){
	// Check if number is Armstrong
	int i = 0 , N = atoi(argv[1]);
	printf("Found %d digits in %d\n",getDigits(N),N);
	if (isArmstrong(N)==1){
		printf("The number %d is an Armstrong number\n",N);
	}else 
		printf("The number %d is NOT an Armstrong number\n",N);
}
