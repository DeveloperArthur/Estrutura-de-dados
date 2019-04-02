/*Faça um programa no qual o usuário digite 6 números 
em uma matriz 3 X 2, depois o programa deve exibir todos 
o números que foram digitados, exceto os números ímpares.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int matriz[3][2];
	
	//insere valores o array
	for(int i=0; i<3; i++){
		for(int l=0; l<2; l++){
			printf("Digite o valor de [%i][%i]: ", i,l);
			scanf("%i", &matriz[i][l]);
		}
	}
	
	//imprime a matriz
	printf("\nMatriz: ");
	for(int m=0; m<3; m++){
		printf("\n");
		for(int k=0; k<2; k++){
			if (matriz[m][k]%2==0){
				printf("[%i]", matriz[m][k]);
			}else printf("[null]");
		}
	}
}
