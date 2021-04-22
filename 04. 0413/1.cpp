#include <stdio.h>
#define RESP_SIZE 40
#define FREQUENCY 11

int main(void){
	int resp[RESP_SIZE] = { -1, };
	int result[FREQUENCY] = { 0, };
	int cnt = 0, input = 0;
	
	for(cnt = 0; cnt <= RESP_SIZE; cnt++){
		scanf("%d", &resp[cnt]);
		if(resp[cnt] == -1)	break;
		result[resp[cnt]]++;
	}
	
	printf("FREQUENCY	RESULT\n");
	for(cnt = 1; cnt <= 10; cnt++){
		printf("%d		%d\n", cnt, result[cnt]);
	}
}
