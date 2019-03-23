/*
Faça um programa no qual o usuário digite 5 números em um vetor e depois 
o programa apresente na tela quantos e quais foram os números ímpares digitados.
*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){
	int array[5];
	int cont=0;
	for (int i=0; i<5; i++){
		printf("Digite o numero da posicao [%i]: ", i+1);
		scanf("%i", &array[i]);
	}
	printf("\n");
	for(int j=0; j<5; j++){
		if(array[j]%2!=0){
			cont++;
			printf("%i, ", array[j]);
		}
	}
	
	printf("\nTotal de impares: %i", cont);
}
