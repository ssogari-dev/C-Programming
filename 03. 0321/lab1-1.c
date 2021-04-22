#include <stdio.h>
int main(void){
	int u, a, t;
	int v, s;
	
	scanf("%d %d %d", &u, &a, &t);
	v = u + a*t ;
	s = u*t + 0.5*a*t*t;
	
	printf("Final Velocity: %d\nDistance Traversed: %d\n", v, s);
}
