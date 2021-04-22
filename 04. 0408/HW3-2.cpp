#include <stdio.h>
int main(void){
	int a, b, c, d, e;
	int num;
	
	printf("Enter a five-digit number: ");
	scanf("%d", &num);
	
	if((10000 > num) || (num > 99999))	return 0;
	
	a = num / 10000;
	b = (num-(a*10000))/1000;
	d = (num%100)/10;
	e = num%10;
	
	if((a == e)&&(b == d))	printf("%d is a palindrome", num);
	else printf("%d is not a palindrome", num);
	
	return 0;
}
