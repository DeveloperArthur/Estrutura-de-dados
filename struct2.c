#include<stdio.h>
#include<stdlib.h>
struct aluno{
	int ra, idade;
	float nota;
	char nome[20];
};

main(){
	struct aluno al;
	printf("Digite um RA, idade, nota e nome:\n");
	scanf("%d%d%f", &al.ra, &al.idade, &al.nota);
	fflush(stdin);
	gets(al.nome);
	printf("RA=%d, idade=%d\n", al.ra, al.idade);
	printf("nota=%.2f, nome=%s\n", al.nota, al.nome);
}
