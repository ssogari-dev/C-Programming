#include <stdio.h>

int main(void){
	int input[100] = { 0, };
	int cnt = 0, sum = 0;
	int max = 0, min = 0;
	
	while(1){
		printf("type an integer: ");
		scanf("%d", &input[cnt]);
		
		if(input[cnt] == -1)	break;
		if(cnt == 0){
			max = input[0];
			min = input[0];
		}
		
		if(input[cnt] < min)	min = input[cnt];
		if(input[cnt] > max)	max = input[cnt];

		sum += input[cnt];
		cnt++;
	}
	printf("largest integer=%d, lowest integer=%d, and average=%f", max, min, (float)sum/(float)cnt);
}
