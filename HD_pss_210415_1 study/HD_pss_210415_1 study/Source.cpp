#include<stdio.h>
/*
1. ���ǹ�
2. try catch exception() {

}

void main() {
	int number = 33;
		
	if (number ==0) {
		printf("0");
	}
	else if (number %2 == 0){
		printf("¦��");
	}
	else  {
		printf("Ȧ��");
	}

	fgetc(stdin);
}
*/


void main() {
	int i;
	
	printf("1���� ū���� �Է��غ�����.");
	printf("\n");
	scanf_s("%d", &i);
	
	
	if (i == 0) {
		printf("Error");
	}
	else if (i %2==0){
		printf("¦��");
	}
	else {
		printf("Ȧ��");
	}

	printf("\n");

	fgetc(stdin);
}