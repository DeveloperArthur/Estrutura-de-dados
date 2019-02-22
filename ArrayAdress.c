#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){
	
	int array[6];
	printf("Endereco das variaveis do array:\n");
	for(int i=0; i<6; i++){
		printf("%p\n", &array[i]);
	}
	getch();
	
}
