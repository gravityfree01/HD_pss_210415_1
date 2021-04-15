#include<stdio.h>
void main() {
	int number = 2;
	int i = 0;
	while (i<4) {
		int j = 0;
		while (j <=i) {
			printf("%d", number);
			number += 2;
			j ++;
			printf(" ");
		} 
		i ++;
		printf("\n");	
	}
	fgetc(stdin);
}



