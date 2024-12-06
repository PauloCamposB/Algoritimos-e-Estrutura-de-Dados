#ifndef PIZZA_H
#define PIZZA_H

#include "ingrediente.h"

#define MAX_INGREDIENTES 10

typedef struct {
    int id;
    char nome[100];
    char tamanho;
    float preco;
    Ingrediente ingredientes[MAX_INGREDIENTES];
    int qtd_ingredientes;
} Pizza;

void adicionarPizza(Pizza *cardapio, int *qtd_pizzas);
void visualizarPizzas(Pizza *cardapio, int qtd_pizzas);
void editarPizza(Pizza *cardapio, int qtd_pizzas);
void removerPizza(Pizza *cardapio, int *qtd_pizzas);
void salvarPizzas(Pizza *cardapio, int qtd_pizzas);
void carregarPizzas(Pizza *cardapio, int *qtd_pizzas);

#endif
