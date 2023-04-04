#include <stdio.h>

typedef struct arvore {
int info;
struct arvore *esq;
struct arvore *dir;
} Arvore;

int eh_espelho(Arvore * arv_a, Arvore * arv_b){
    if (arv_a==NULL && arv_b==NULL)
        return 1;

    if (arv_a==NULL || arv_b == NULL)
        return 0;

    return  arv_a->info == arv_b->info &&
            eh_espelho(arv_a->esq, arv_b->dir) &&
            eh_espelho(arv_a->dir, arv_b->esq);
}

Arvore * cria_espelho(Arvore * arv_a){
    if (arv_a == NULL)
        return NULL;
    else {
        Arvore *nova;

        cria_espelho(arv_a->esq);
        cria_espelho(arv_a->dir);

        nova->dir = arv_a->esq;
        nova->esq = arv_a->dir;
        return nova;
    }
}

void main(){
}
