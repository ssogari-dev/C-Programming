/*	Read two integers N1, N2
	if one number is two times the other number,
		for example, N1 = 10 / N2 = 20
		print the sum of the two numbers
	else print "condition not satisfied"
*/

#include <stdio.h>
int main(void){
	int num1, num2;
	
	printf("Please type num1: ");
	scanf("%d", &num1);
	printf("Please type num2: ");
	scanf("%d", &num2);
	
	if((num2 == num1 * 2) || (num1 == num2 * 2))	printf("result = %d", num1 + num2);
	else	printf("condition not satisfied.");
	
	return 0;
}
