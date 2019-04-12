#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void mudar(char *nome2){
	nome2[4] = 'o';
}

int main(){
	char nome[] = "Maria";
	mudar(nome);
	printf("%s", nome);
}


