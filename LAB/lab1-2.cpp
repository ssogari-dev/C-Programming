#include <stdio.h>
int main(void){
	int a, b, sum = 0;
	for(a = 100 ; a <= 200 ; a++){
		if(a % 3 == 0)	continue;
		if(a % 2 == 0)	continue;
		sum += a;
	}
	
	printf("sum is %d", sum);
}
