#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){
	
	int array[3][2];
	printf("Endereco das variaveis do array:\n");
	for(int j=0; j<3; j++){
		for(int i=0; i<2; i++){
			printf("%p\n", &array[i][j]);
		}
	}
	getch();
	
}
