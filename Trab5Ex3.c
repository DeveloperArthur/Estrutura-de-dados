/*É possível enviar um vetor para um procedimento que possua como parâmetro um ponteiro? 
Justifique sua resposta.
Exemplo:
*/
#include<stdio.h>

void imprimir(char *p){
    printf("%s",p);
}
main(){
	char nome[] = "maria";
	imprimir(nome);
}
/*O código acima está correto? 
Podemos receber um vetor dentro de um ponteiro? 
Justifique sua resposta.*/

//Resposta: Sim, podemos porque o vetor guarda e passa um endereço de memória.
