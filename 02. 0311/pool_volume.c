/*	������ü�� ������ ���� ����ϱ� (Compute the Volume of a Swimming Pool) 

	length, width, height �Է¹޾Ƽ�
	float������ ����(volume) ����ϱ�
*/

#include <stdio.h>

int main(void){
	float length, width, height;
	
	printf("Please type the length: ");
	scanf("%f", &length);
	printf("Please type the width: ");
	scanf("%f", &width);
	printf("Please type the height: ");
	scanf("%f", &height);
	
	printf("volume = %f", length*width*height);
	return 0;
}
