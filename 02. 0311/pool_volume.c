/*	직육면체형 수영장 부피 계산하기 (Compute the Volume of a Swimming Pool) 

	length, width, height 입력받아서
	float형으로 부피(volume) 출력하기
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
