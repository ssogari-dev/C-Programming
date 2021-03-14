/*	원통형 컵의 부피 구하기 (Compute the Volume of a Circular cylinder) 

	radius, height 입력받아서
	float형으로 부피(volume) 출력하기
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
