#include "lista_dupla.h"


struct lista_dupla * cria_lista_dupla(){
	struct lista_dupla * ld = (struct lista_dupla *) malloc (sizeof(struct lista_dupla));
	if(ld != NULL){
		ld->prim = NULL;
	}
	return ld;
}

int lista_dupla_vazia (struct lista_dupla *ld){
	if(ld->prim == NULL)
		return 1;
	return 0;
}

int insere_inicio_dupla(int i, struct lista_dupla * ld){
	struct no_duplo * novo = cria_no_duplo(i);
	if(novo){
		if(!lista_dupla_vazia(ld)){
			novo->prox = ld->prim;
			novo->ant = ld->prim->ant;
			novo->prox->ant = novo;
			novo->ant->prox = novo;
		}
		ld->prim = novo;
		return 1;
	}
	return 0;
  }

int remove_inicio_dupla(int *i, struct lista_dupla *ld){
	struct no_duplo * aux;
	if(lista_dupla_vazia(ld))
		return 0;
	aux = ld->prim;
	*i = ld->prim->info;
	if(ld->prim == ld->prim->prox){ //tem um só
		ld->prim = NULL;
	}
	else{
		ld->prim = ld->prim->prox;
		aux->prox->ant = aux->ant;
		aux->ant->prox = aux->prox;
	}
	free(aux);
	return 1;
}

int remove_todas_ocorrencias(int n, struct lista_dupla *l){
	struct no_duplo * aux, *segura;
	int cont = 0;

	while(!lista_dupla_vazia(l) && l->prim->info == n){
		cont ++;
		remove_inicio_dupla(&n,l);
	}
	if(lista_dupla_vazia(l))
		return cont;
	aux = l->prim;
	do{
		if(aux->info == n){
			segura = aux;
			cont ++;
			aux->ant->prox = aux->prox;
			aux->prox->ant = aux->ant;
			aux = aux->prox;
			free(segura);
		}
		else{
			aux = aux->prox;
		}
	}while(aux != l->prim);
	return cont;
}

int remove_fim_dupla(int *i, struct lista_dupla *ld){
	struct no_duplo * aux;
	if(lista_dupla_vazia(ld))
		return 0;
	aux = ld->prim->ant;
	*i = aux->info;
	if(ld->prim == ld->prim->prox){ //tem um só
		ld->prim = NULL;
	}
	else{
		aux->ant->prox = aux->prox;
		aux->prox->ant = aux->ant; 
	}
	free(aux);
	return 1;
}

int insere_fim_dupla(int i, struct lista_dupla * ld){
	struct no_duplo * novo = cria_no_duplo(i);
	if(novo){
		if(!lista_dupla_vazia(ld)){
			novo->prox = ld->prim;
			novo->ant = ld->prim->ant;
			novo->prox->ant = novo;
			novo->ant->prox = novo;
		}
		else{
			ld->prim = novo;
		}
		return 1;
	}
	return 0;
  }
  
void mostra_lista_dupla(const char *msg, struct lista_dupla *ld){ //const não deixa alterar mensagem
	struct no_duplo * aux;
	printf("\n%s: ", msg);
	if(lista_dupla_vazia(ld)){
		printf("Esta vazia\n");
	}	
	else{
		aux = ld->prim;
		do{
			printf("%d ", aux->info);
			aux = aux->prox;	
		}while(aux !=ld->prim);
	}
	printf("\n");
}
   
int remove_por_ponteiro(struct no_duplo *aux, int *i, struct lista_dupla *ld){
	if(lista_dupla_vazia(ld))
		return 0;
	*i = aux->info;
	if(aux == aux->prox)
		ld->prim = NULL;
	else{
		if(aux == ld->prim)
			ld->prim = ld->prim ->prox; 
		aux->ant->prox = aux->prox;
		aux->prox->ant = aux->ant;
	}	
	free(aux);
	return 1;
}  

