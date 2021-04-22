#include <stdio.h>
int main(void){
	int num, temp;
	int a, b, c, d, e;
	
	scanf("%d", &num);
	
	if((num < 10000)||(num > 99999)){ 
		printf("Wrong !");
		return 0;
	}
	
	a = num/10000;
	num = num%10000;
	b = num/1000;
	num = num%1000;
	c = num/100;
	num = num%100;
	d = num/10;
	e = num%10;
	
	printf("%d   %d   %d   %d   %d", a, b, c, d, e);
}
