#include<locale.h>
#include<stdio.h>
#include<stdlib.h>

typedef struct pessoa{
	int idade;
	struct pessoa *anterior;
}tpessoa;

int main(){
	tpessoa *inicio_pessoa;
	tpessoa *anterior_pessoa;
	int resp;
	
	inicio_pessoa = (tpessoa *)malloc(sizeof(tpessoa));
	if(inicio_pessoa == NULL){
		printf("Não foi possível alocar memória!\n");
		exit(1);
	}
	
	anterior_pessoa = inicio_pessoa;
	
    for(;;){
    	
    	printf("Digite a idade: ");
    	scanf("%d", &anterior_pessoa->idade);
    	printf("Deseja continuar? <1>SIM / <outro valor>NAO: ");
    	scanf("%d", &resp);
		if(resp == 1){
			anterior_pessoa->anterior = (tpessoa *)malloc(sizeof(tpessoa));
			anterior_pessoa = anterior_pessoa->anterior;
		}
		else break;
	}
	
	printf("\n");
	anterior_pessoa->anterior = NULL;
	anterior_pessoa = inicio_pessoa;
	printf("Busca realizada com sucesso:\n");
	while(anterior_pessoa != NULL){
		printf("idade: %d\n", anterior_pessoa->idade);
		anterior_pessoa = anterior_pessoa->anterior;
	}	
	return 0;
	
}
