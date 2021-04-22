#include <stdio.h>
int main(void){
	int h, q, d, n, p;
	float total = 0;
	
	printf("Enter number of coins (Half-Dollars, Quanters, Dimes, Nickels, Pennies):\n");
	scanf("%d %d %d %d %d", &h, &q, &d, &n, &p);
	
	total = h*0.5 + q*0.25 + d*0.1 + n*0.05 + p*0.01;
	
	printf("Your total is %f dollar(s).", total);
}
