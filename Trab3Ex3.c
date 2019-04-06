/*Faça um programa que verifique se 
uma palavra é substring de uma outra palavra.
*/

#include<stdio.h>
#include<string.h>

int main(){
	char palavra[20];
	char palavra2[20];
	int cont=0;
	
	printf("Digite uma palavra: ");
	fflush(stdin);
	gets(palavra);
	printf("Digite a segunda palavra: ");
	fflush(stdin);
	gets(palavra2);
	
	int tam = strlen(palavra);
	int tam2 = strlen(palavra2);
	
	for(int i=0; i<tam; i++){
		for(int j=0; j<tam2; j++){
			if(palavra[i]==palavra2[j]){
				cont = cont+1;
			}
		}
	}
	
	if(cont>1){
		printf("Sim, eh substring");
	}else printf("Nao eh substring");
	
}
