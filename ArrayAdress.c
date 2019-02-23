#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){
	
	char array[6];
	printf("Endereco das variaveis do array:\n");
	for(int i=0; i<6; i++){
		printf("Array[%d] = %p\n", i,&array[i]);
	}
	getch();
	
}
