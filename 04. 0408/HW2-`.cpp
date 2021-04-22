#include <stdio.h>
int main(void){
	int num, div;
	printf("Enter a number: ");
	scanf("%d", &num);
	
	for(div = 1;div < num; div++){
		if(num % div == 0){
			printf("%d is not a prime number.", num);
			return 0;
		}
	}
	
	printf("%d is a prime number.", num);
	return 0;
}
