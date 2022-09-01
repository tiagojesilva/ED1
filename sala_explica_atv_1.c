//Struct node?
//memoria dinamica

//NOTE: o campo *prox, aponta para info e para prox
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
int info;
struct nodo *prox;

}Nodo;

Nodo *topo = NULL;

//funcao empilhar

 void empilhar (int n ){

	Nodo *novo;
    novo = (Nodo *) malloc (sizeof(Nodo));

    if (novo = NULL) exit (1);
    novo -> info = n;

    if(topo == NULL){
	//topo = novo;
	novo -> prox = NULL;

    } else {
        novo -> prox = topo;
        topo = novo;
    }



}

void imprimir (){
    Nodo *aux;
    aux = topo;

    while (aux != NULL){
            printf("%d ", aux->info);
            aux = aux ->prox;

    }

}

int desempilha (){

    Nodo *aux;
    int n;
    if(topo == NULL){
        printf("\nPilha vazia");
        system("pause");
        return -1;
    }

    n = topo ->info;
    aux = topo;
    topo = topo ->prox;
    free(aux);
    return (n);
}

int main (){


void empilhar( );

return 0;
}
