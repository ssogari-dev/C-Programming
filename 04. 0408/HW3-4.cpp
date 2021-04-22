#include <stdio.h>
int main(void){
	int integer;
	float num, cnt, result;
	printf("Type a positive float number (N): ");
	scanf("%f", &num);
	
	result = num;
	
	printf("Type an integer number (P): ");
	scanf("%d", &integer);
	
	for(cnt = 1 ; cnt < integer ; cnt ++){
		result = result * num;
	}
	
	printf("Result is %f", result);
	return 0;
}
