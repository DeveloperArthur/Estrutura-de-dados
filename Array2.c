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
	int busca;
	int cont=0;
	//armazena os valores no array
	for (int i=0; i<5; i++){
		printf("Digite o numero da posicao [%i]: ", i+1);
		scanf("%i", &array[i]);
	}
	printf("Numeros guardado no array...");
	
	printf("\n\nAgora digite um numero para a busca: ");
	scanf("%i", &busca);
	
	//verifica se tem o numero no array
	for(int j=0; j<5; j++){
		if(busca == array[j]){
			printf("\nO numero %i esta na posicao [%i] do array!\n", busca, j+1);
		}else cont++;
	}
	
	if(cont == 5){
		printf("O numero %i nao existe no array\n", busca);
	}
}
