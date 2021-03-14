/*	Read three integers N1, N2 and N3
	if first number is the biggest number,
	print "num1 is the biggest"
	if not, print "num1 is not the biggest number"
*/

#include <stdio.h>
int main(void){
	int num1, num2, num3;
	
	printf("Please type num1: ");
	scanf("%d", &num1);
	printf("Please type num2: ");
	scanf("%d", &num2);
	printf("Please type num3: ");
	scanf("%d", &num3);
	
	if((num1 > num2)&&(num1 > num3))	printf("num1 is the biggest");
	else	printf("num1 is not the biggest number");
	
	return 0;
}
