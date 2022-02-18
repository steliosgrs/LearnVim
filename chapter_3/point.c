#include <stdio.h>
#include "Point.h"

int main(void){
	point a,b;
	a.x = 1; a.y = 1;
	b.x = 4; b.y = 5;
	printf("%f\n",distance(a,b));
	return 0;
}
