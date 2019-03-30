
/*Fa�a um programa no qual o usu�rio digite 5 n�meros em 
um vetor e depois realize a busca de um determinado n�mero. 
Se o n�mero n�o existir no vetor o usu�rio dever� digitar outro n�mero. 
Isso se repetir� at� o usu�rio digitar um n�mero presente no vetor. 
O programa precisa exibir uma mensagem informando que o n�mero foi encontrado 
e o n�meros de vezes que ele aparece no vetor.
Exemplo: 
Digitou: 5, 4, 5, 9, 1
Buscar: 5 
�Foram encontrar 2 ocorr�ncias do n�mero 5 no vetor!�
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero, array[5], cont=0;
    
    for(int i=0; i<5; i++){
        printf("Digite o valor do array[%i]: ", i+1);
        scanf("%i", &array[i]);
    }
    
    printf("\nDigite o numero que deseja buscar: ");
    scanf("%i", &numero);
    
    while(1){
	
    	for(int i=0; i<5; i++){
			if(numero == array[i]){
				cont++;
			}
		}
	
		if(cont>=1){
	    	printf("\nForam encontrados %i ocorr�ncias do n�mero %i no array!", cont, numero);
	    	break;
		}else{
	    	printf("\nNumero nao existente, por favor digite outro numero: ");
	    	scanf("%i", &numero);
		}
	}
}

