#include <stdio.h>
#include "Point.h"

int main(int argc, char *argv[]){
	point a,b;
    /*              
	a.x = 1; a.y = 1;
	b.x = 4; b.y = 5;
    */

    // Read arguments from terminal
	a.x = atoi(argv[1]); a.y = atoi(argv[2]);
	b.x = atoi(argv[3]); b.y = atoi(argv[4]);

	printf("%f\n",distance(a,b));
	return 0;
}
