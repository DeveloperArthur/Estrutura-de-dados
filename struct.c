#include<stdio.h>
#include<stdlib.h>
struct aluno{
	int ra, idade;
	char nome[20];
};

main(){
	struct aluno al;
	printf("Digite um RA e o nome:\n");
	scanf("%d", &al.ra);
	fflush(stdin);
	gets(al.nome);
	printf("O RA informado foi %d e o nome %s", al.ra, al.nome);
}
