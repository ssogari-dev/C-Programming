#include <stdio.h>
int main(void){
	float weight, height;
	float bmi;
	
	scanf("%f %f", &weight, &height);
	bmi = (weight * 703) / (height * height);
	
	if(bmi < 18.5)	printf("Underweight (BMI: %.3f)", bmi);
	else if((18.5 <= bmi)||(bmi < 25))	printf("Normal (BMI: %.3f)", bmi);
	else if((25 <= bmi)||(bmi < 30))	printf("Overweight (BMI: %.3f)", bmi);
	else	printf("Obese (BMI: %.3f)", bmi);
}
