/*Crie um programa com um procedimento que receba uma vari�vel por refer�ncia 
e depois atualize o valor da vari�vel para o seu fatorial correspondente.
Exemplo:
int n = 5;
fatorial(&n);
printf(�%d�,n); //Imprimir� 120*/
#include<stdio.h>
void fatorial(int* n) {
	
    int temp, resultado = 1;
	if (*n > 1) {
        temp = *n - 1;
        fatorial(&temp);
        resultado = (*n) * temp;
    }
    
	*n = resultado;
}
int main(){
	int n = 5;
	fatorial(&n);
	printf("%d", n);
}

