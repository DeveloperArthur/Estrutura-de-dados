/*Faça um programa no qual o usuário digite 5 números em 
um vetor e depois realize a busca de um determinado número. 
Se o número não existir no vetor o usuário deverá digitar outro número. 
Isso se repetirá até o usuário digitar um número presente no vetor. 
O programa precisa exibir uma mensagem informando que o número foi encontrado 
e o números de vezes que ele aparece no vetor.
Exemplo: 
Digitou: 5, 4, 5, 9, 1
Buscar: 5 
“Foram encontrar 2 ocorrências do número 5 no vetor!”
*/

#include <stdio.h>
#include <stdlib.h>
int numero, array[5], cont=0;
void buscarNumero(){
    
    
    for(int i=0; i<5; i++){
		if(numero == array[i]){
			cont++;
		}
	}
	if(cont>=1){
	    printf("\nForam encontrados %i ocorrências do número %i no array!", cont, numero);
	}else{
	    printf("\nNumero nao existente, por favor digite outro numero: ");
	    scanf("%i", &numero);
        buscarNumero();
	}
}

int main(){
    
    
    for(int i=0; i<5; i++){
        printf("Digite o valor do array[%i]: ", i+1);
        scanf("%i", &array[i]);
    }
    
    printf("\nDigite o numero que deseja buscar: ");
    scanf("%i", &numero);
    buscarNumero();
    
}

