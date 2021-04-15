#include<stdio.h>
void main() {
	int i =+ 2;
	while (i<20) {
		int j = 2;
		while (j <= i+2) {
			printf("%d", j);
			printf(" ");
			j++;
		} 
		i ++;
		printf("\n");	
	}
	fgetc(stdin);
}
