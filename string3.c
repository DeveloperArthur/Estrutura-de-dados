/*Faça um programa que receba um nome e exiba ao inverso. 
Exemplo:
Usuário digitou “joão”
O programa exibe oãoj
*/

#include<stdio.h>
#include<string.h>

int main(){
	char nome[15];
	
	printf("Digite o nome: ");
	fflush(stdin);
	gets(nome);
	
	int tam = strlen(nome);
	
	for(int i=tam-1; i>=0; i--){
		printf("%c", nome[i]);
	}
}


