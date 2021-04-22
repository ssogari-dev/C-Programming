#include <stdio.h>
int main(void){
	int num, a, b, c, d, e, count = 0;
	printf("Enter a 5-digit number: ");
	scanf("%d", &num);
	
	if((10000 > num) || (num > 99999))	return 0;
	
	a = num/10000;
	b = (num-(a*10000))/1000;
	c = (num-(a*10000+b*1000))/100;
	d = (num-(a*10000+b*1000+c*100))/10;
	e = num % 10;
	
	if(a == 7)	count++;
	if(b == 7)	count++;
	if(c == 7)	count++;
	if(d == 7)	count++;
	if(e == 7)	count++;
	
	printf("The number %d has %d seven(s) in it", num, count);
	return 0;
}
