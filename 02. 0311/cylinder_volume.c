/*	������ ���� ���� ���ϱ� (Compute the Volume of a Circular cylinder) 

	radius, height �Է¹޾Ƽ�
	float������ ����(volume) ����ϱ�
*/

#include <stdio.h>

int main(void){
	float radius, height;
	
	printf("Please type the radius: ");
	scanf("%f", &radius);
	printf("Please type the height: ");
	scanf("%f", &height);
	
	printf("volume = %f", radius*radius*height*3.14);
	return 0;
}
