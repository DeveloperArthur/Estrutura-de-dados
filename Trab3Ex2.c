/*
Faça um programa que o usuário digite uma palavra e 
depois informe duas letras, sendo a primeira a letra antiga e a segunda a letra nova.
Exemplo:
Palavra…...: Uninove
Letra antiga: n
Letra nova..: m
Palavra final: Umimove
*/

#include<stdio.h>
#include<string.h>

int main(){
	char palavra[10], new_letra, old_letra;
	int tam;
	
	printf("Digite uma palavra: ");
	fflush(stdin);
	gets(palavra);
	
	tam = strlen(palavra);
	
	printf("Digite a letra antiga: ");
	fflush(stdin);
	scanf("%c", &old_letra);
	
	printf("Digite a letra nova: ");
	fflush(stdin);
	scanf("%c", &new_letra);
	
	printf("Palavra final: ");
	for(int i=0; i<tam; i++){
		if(palavra[i]==old_letra){
			printf("%c", new_letra);
		}else{
			printf("%c", palavra[i]);
		}
	}
}
