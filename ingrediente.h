#ifndef INGREDIENTE_H
#define INGREDIENTE_H

typedef struct {
    int id;
    char nome[100];
    float preco;
} Ingrediente;

void salvarIngredientes(Ingrediente *ingredientes, int qtd_ingredientes);
void carregarIngredientes(Ingrediente *ingredientes, int *qtd_ingredientes);



#endif
