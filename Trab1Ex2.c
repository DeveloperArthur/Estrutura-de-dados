/*
Faça um programa no qual o usuário digite 5 números em um vetor e 
depois informe um número para ser ocultado. O programa deverá exibir todos 
os números digitados, exceto o número que o usuário pediu para não ser exibido.
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
