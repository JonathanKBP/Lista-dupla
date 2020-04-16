#include "no_duplo.h"

struct lista_dupla{
	struct no_duplo * prim;
};

struct lista_dupla * cria_lista_dupla();

int lista_dupla_vazia (struct lista_dupla *);

int insere_inicio_dupla(int, struct lista_dupla *);

int remove_inicio_dupla(int *, struct lista_dupla *);

int insere_fim_dupla(int, struct lista_dupla *);

int remove_fim_dupla(int *, struct lista_dupla *);

void mostra_lista_dupla(const char *, struct lista_dupla *);

int remove_por_ponteiro(struct no_duplo *, int *, struct lista_dupla *);

int remove_todas_ocorrencias(int, struct lista_dupla *);
