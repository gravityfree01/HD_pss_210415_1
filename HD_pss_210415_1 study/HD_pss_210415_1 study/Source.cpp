#include<stdio.h>
/*
1. 조건문
2. try catch exception() {

}

void main() {
	int number = 33;
		
	if (number ==0) {
		printf("0");
	}
	else if (number %2 == 0){
		printf("짝수");
	}
	else  {
		printf("홀수");
	}

	fgetc(stdin);
}
*/


void main() {
	int i;
	
	printf("1보다 큰수를 입력해보세요.");
	printf("\n");
	scanf_s("%d", &i);
	
	
	if (i == 0) {
		printf("Error");
	}
	else if (i %2==0){
		printf("짝수");
	}
	else {
		printf("홀수");
	}

	printf("\n");

	fgetc(stdin);
}