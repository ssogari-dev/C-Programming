#include <stdio.h>
int main(void){
	int num, div;
	printf("Enter a number: ");
	scanf("%d", &num);
	
	for(div = 2;div < num; div++){
		if(num % div == 0){
			printf("%d is not a prime number.", num);
			return 0;
		}
	}
	
	printf("%d is a prime number.", num);
	return 0;
}
