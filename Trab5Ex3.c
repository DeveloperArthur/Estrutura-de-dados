/*� poss�vel enviar um vetor para um procedimento que possua como par�metro um ponteiro? 
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
/*O c�digo acima est� correto? 
Podemos receber um vetor dentro de um ponteiro? 
Justifique sua resposta.*/

//Resposta: Sim, podemos porque o vetor guarda e passa um endere�o de mem�ria.
