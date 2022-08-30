#include <stdio.h>
#include <stdlib.h>

#define MAXTAM 10

typedef struct {
    int Item [MAXTAM];
    int Topo;

}TPilha;

void TPilha_Inicia (TPilha *p){
    p ->Topo = -1;

}

int TPilha_Vazia(TPilha *p){
    if(p->Topo == -1){
        return 1;
    }else{
        return 0;
    }

}

int TPilha_Cheia (TPilha *p){
    if(p->Topo == MAXTAM-1){
        return 1;
    }else {
        return 0;
    }
}

void TPilha_Insere (TPilha *p, int x){
    if(TPilha_Cheia(P) == 1){
        printf("\n ERRO, pilha cheia");
    }else {
        p->Topo++;
        p->Item[p->Topo] = x;
    }
}

int TPilha_Remove (TPilha *p){
    int aux;

    if(TPilha_Vazia(P)== 1){
        printf("\Nerro, pilha vazia section 2");
    }else {
        aux = p->Item[p->Topo];
        p->Topo--;
        return aux;
    }
}

int main (){
    TPilha *p = (TPilha*) malloc (sizeof (TPilha));
    TPilha_Inicia(P);

    TPilha_Insere(P, 7);
    TPilha_Insere(P, 1);
    TPilha_Insere(P, 1990);

    int  aux = TPilha_Remove(p);
    printf("\n SAIU: %d", aux);

    
}
