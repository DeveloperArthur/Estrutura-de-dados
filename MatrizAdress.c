#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){
	
	char array[3][2];
	printf("Endereco das variaveis do array:\n");
	for(int j=0; j<3; j++){
		for(int i=0; i<2; i++){
			printf("Endereco da matriz[%d][%d] = %p\n", j,i,&array[j][i]);
		}
	}
	getch();
	
}
