// compile gcc math_types -o math_types -lm
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
typedef float Number;
typedef int numType;
Number randNum(){
	return 1.0*rand()/RAND_MAX;
}
main(int argc , char *argv[]){
	int i, N = atoi(argv[1]);
	float m1 = 0.0, m2 = 0.0;
	Number x;
	for(i = 0; i < N; i++){
		x = randNum();
		printf("%d number %f\n",i+1,x);
		m1 += ((float) x)/N;
		m2 += ((float) x*x)/N;
	}
	printf("Average:%f %f\n", m1,m2);
	printf("Std. deviation:%f\n", sqrt(m2-m1*m2) );
	//printf("Test 2: %f \n", sqrt(9));
}

