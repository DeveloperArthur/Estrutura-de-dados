/*
Fa�a um programa no qual o usu�rio digite 5 n�meros em 
um vetor e depois o programa deve apresentar a soma de 
todos os n�meros pares digitados pelo usu�rio.
*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){
	int array[5];
	int soma=0;
	
	for (int i=0; i<5; i++){
		printf("Digite o numero da posicao [%i]: ", i+1);
		scanf("%i", &array[i]);
		if(array[i]%2==0){
			soma = soma + array[i];
		}
	}
	
	printf("\nA soma de todos os valores pares eh %i", soma);
	
	
		
}
