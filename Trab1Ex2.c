/*
Fa�a um programa no qual o usu�rio digite 5 n�meros 
em um vetor e depois o usu�rio digite um n�mero para poder buscar no vetor. 
O programa deve informar se o n�mero existe ou n�o no vetor. Caso o n�mero exista o 
programa deve informar em qual �ndice o n�mero foi encontrado.
*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){
	int array[5];
	int num;
	
	for (int i=0; i<5; i++){
		printf("Digite o numero da posicao [%i]: ", i+1);
		scanf("%i", &array[i]);
	}
	printf("Numeros guardado no array...");
	
	printf("\n\nNumero para ocultar: ");
	scanf("%i", &num);
	
	for(int j=0; j<5; j++){
		if(num != array[j]){
			printf("%i ", j+1);
		}
	}
}
