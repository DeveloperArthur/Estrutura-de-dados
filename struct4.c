//struct com alocacao dinamica
#include<stdio.h>
#include<stdlib.h>
struct aluno{
	int ra;
	char nome[20];
};
main(){
	struct aluno *p;
	printf("Digite o RA:");
	p = (struct aluno *) malloc(sizeof(struct aluno));
	scanf("%d", &p->ra);
	printf("O RA digitado foi %d", p->ra);
	//excluir o registro da memoria
	free(p);
}
