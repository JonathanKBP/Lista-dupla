#include "lista_dupla.h"
#include <time.h>

/*int main(int argc, char *argv[]) {
	struct struct struct lista_dupla * l = cria_struct struct struct lista_dupla();
	int i;
	insere_inicio_dupla(2, l); 	
	insere_inicio_dupla(4, l);
	insere_inicio_dupla(6, l);
	mostra_struct struct struct lista_dupla("lista depois das insercoes de inicio", l);
	insere_fim_dupla(1, l); 	
	insere_fim_dupla(3, l);
	insere_fim_dupla(5, l);
	mostra_struct struct struct lista_dupla("lista depois das insercoes de fim", l);
	if(remove_inicio_dupla(&i, l)){
		printf("\n%d saiu do inicio", i);		
		mostra_struct struct struct lista_dupla("lista depois da remocao de inicio", l);		
	}
	else{
		printf("\nFalha na remocao\n");
	}
	if(remove_fim_dupla(&i, l)){
		printf("\n%d saiu do fim", i);
		mostra_struct struct struct lista_dupla("lista depois da remocao de fim", l);		
	}
	else{		
		printf("\nFalha na remocao\n");		
	}
	return 0;
}*/

//cadeiras
/*int main (){
	int i, j,k, batedor;
	struct no_duplo * aux;
	struct lista_dupla *l = cria_lista_dupla();
	srand(time(0));
	for(i=1; i<=12; i++){
		insere_fim_dupla(i, l);
	}
	mostra_lista_dupla ("cadeias: ", l);
	k = rand() % 20;//numero ate 19
	printf("\n k = %d\n", k);
	aux = l->prim;
	while(l->prim != l->prim->prox){
		for(i=1; i<=k; aux = aux->prox, i++);
		batedor = aux->prox;
		remove_por_ponteiro(aux, &j, l);
		printf("\n%d dancou", j);
		aux = batedor;
	}
	mostra_lista_dupla("\nQuem ganhou", l);
	return 0;
}
*/

int main (){
	struct lista_dupla *l = cria_lista_dupla();
	int i;
	//insere_fim_dupla(2,l);
	//insere_fim_dupla(2,l);
	//insere_fim_dupla(3,l);
	//insere_fim_dupla(1,l);
	//insere_fim_dupla(2,l);
	//insere_fim_dupla(2,l);
	insere_fim_dupla(2,l);
	//insere_fim_dupla(4,l);
	insere_fim_dupla(2,l);
	insere_fim_dupla(3,l);
	insere_fim_dupla(2,l);
	insere_fim_dupla(2,l);
	mostra_lista_dupla("depois que inseriu", l);
	i = remove_todas_ocorrencias(2,l);
	printf("\nforam removidas %d ocorrencias\n", i);
	mostra_lista_dupla("depois que removeu", l);
	return 0;
}
	
	


