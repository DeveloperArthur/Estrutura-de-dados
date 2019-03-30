/*
Faça um programa no qual o usuário digite 6 números em uma matriz 3 X 3 e 
depois exiba a matriz na ordem normal e depois na ordem transposta.
Exemplo:
Digitou: 1 4 3 8 2 7 6 9 5
Ordem normal:
1	4	3
8	2	7
6	9	5
Ordem transposta:
1	8	6
4	2	9
3	7	5
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int n1, n2;
	
	printf("Digite o valor de COLUNA e LINHA: ");
	scanf("%i%i", &n1,&n2);
	
    int matriz[n1][n2];
    
	for(int i=0; i<n1; i++){
		for(int l=0; l<n2; l++){
			printf("Digite o valor de [%i][%i]: ", i,l);
			scanf("%i", &matriz[i][l]);
		}
	}	
	
	printf("\nOrdem normal: ");
	for(int j=0; j<n1; j++){
		printf("\n");
		for(int k=0; k<n2; k++){
			printf("[%i]", matriz[j][k]);
		}
	}
	
	printf("\n\nOrdem Transposta: ");
	for(int m=0; m<n2; m++){
		printf("\n");
		for(int n=0; n<n1; n++){
			printf("[%i]", matriz[n][m]);
		}
	}
}
