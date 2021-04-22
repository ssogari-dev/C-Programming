#include <stdio.h>
#define ELEM 10
 
int main(void){
	int val[ELEM] = { 19, 3, 15, 7, 11, 9, 13, 5, 17, 1};
	int cnt, cntr;
	
	printf("Element	Value	Historgram\n");
	for(cnt = 0; cnt < ELEM; cnt++){
		printf("%7d	%5d	", cnt, val[cnt]);
		for(cntr = 0; cntr < val[cnt]; cntr++){
			printf("*");
		}
		printf("\n");
	}
}
