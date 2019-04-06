/*Faça um programa que o usuário digite 
um nome é o programa informa quantas 
vogais tem o nome
*/

#include<stdio.h>
#include<string.h>

int main(){
	char nome[15];
	int cont=0;
	
	printf("Digite seu nome: ");
	fflush(stdin);
	gets(nome);
	
	int tam = strlen(nome);
	
	for(int i=0; i<tam; i++){
		if(nome[i]=='a'||nome[i]=='e'||nome[i]=='i'||nome[i]=='o'||nome[i]=='u'){
			cont++;
		}
	}
	printf("Quantidade de vogais: %i", cont);
}
