#include <stdio.h>
#include <string.h>
#include "pizza.h"

void adicionarPizza(Pizza *cardapio, int *qtd_pizzas) {
    int id;
    printf("Digite o ID da pizza: ");
    scanf("%d", &id);

    // Verificar duplicação de ID
    if (idExistePizza(cardapio, *qtd_pizzas, id)) {
        printf("Erro: ID já utilizado. Tente novamente com um ID diferente.\n");
        return;
    }

    // Adicionar a nova pizza
    cardapio[*qtd_pizzas].id = id;
    printf("Digite o nome da pizza: ");
    scanf(" %[^\n]", cardapio[*qtd_pizzas].nome);
    printf("Digite o tamanho da pizza (P/M/G): ");
    scanf(" %c", &cardapio[*qtd_pizzas].tamanho);
    printf("Digite o preco da pizza: ");
    scanf("%f", &cardapio[*qtd_pizzas].preco);

    printf("Quantos ingredientes essa pizza tera? ");
    scanf("%d", &cardapio[*qtd_pizzas].qtd_ingredientes);

    for (int i = 0; i < cardapio[*qtd_pizzas].qtd_ingredientes; i++) {
        printf("Digite o ID do ingrediente %d: ", i + 1);
        scanf("%d", &cardapio[*qtd_pizzas].ingredientes[i].id);
        printf("Digite o nome do ingrediente %d: ", i + 1);
        scanf(" %[^\n]", cardapio[*qtd_pizzas].ingredientes[i].nome);
        printf("Digite o preco do ingrediente %d: ", i + 1);
        scanf("%f", &cardapio[*qtd_pizzas].ingredientes[i].preco);
    }

    (*qtd_pizzas)++;
    printf("Pizza adicionada com sucesso!\n");
}


// Visualizar as pizzas do cardápio
void visualizarPizzas(Pizza *cardapio, int qtd_pizzas) {
    for (int i = 0; i < qtd_pizzas; i++) {
        printf("\nID: %d\n", cardapio[i].id);
        printf("Nome: %s\n", cardapio[i].nome);
        printf("Tamanho: %c\n", cardapio[i].tamanho);
        printf("Preco: %.2f\n", cardapio[i].preco);
        printf("Ingredientes:\n");
        for (int j = 0; j < cardapio[i].qtd_ingredientes; j++) {
            printf("  - %s (%.2f)\n", cardapio[i].ingredientes[j].nome, cardapio[i].ingredientes[j].preco);
        }
    }
}

// Editar uma pizza do cardápio
void editarPizza(Pizza *cardapio, int qtd_pizzas) {
    int id, encontrado = 0;
    printf("Digite o ID da pizza a ser editada: ");
    scanf("%d", &id);

    for (int i = 0; i < qtd_pizzas; i++) {
        if (cardapio[i].id == id) {
            printf("Editando a pizza: %s\n", cardapio[i].nome);
            printf("Digite o novo nome da pizza: ");
            scanf(" %[^\n]", cardapio[i].nome);
            printf("Digite o novo tamanho da pizza (P/M/G): ");
            scanf(" %c", &cardapio[i].tamanho);
            printf("Digite o novo preco da pizza: ");
            scanf("%f", &cardapio[i].preco);
            printf("Pizza editada com sucesso!\n");
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("Pizza com ID %d nao encontrada.\n", id);
    }
}

// Remover uma pizza do cardápio
void removerPizza(Pizza *cardapio, int *qtd_pizzas) {
    int id, encontrado = 0;
    printf("Digite o ID da pizza a ser removida: ");
    scanf("%d", &id);

    for (int i = 0; i < *qtd_pizzas; i++) {
        if (cardapio[i].id == id) {
            for (int j = i; j < *qtd_pizzas - 1; j++) {
                cardapio[j] = cardapio[j + 1];
            }
            (*qtd_pizzas)--;
            printf("Pizza removida com sucesso!\n");
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("Pizza com ID %d nao encontrada.\n", id);
    }
}

// Salvar pizzas no arquivo
void salvarPizzas(Pizza *cardapio, int qtd_pizzas) {
    FILE *file = fopen("pizzas.txt", "w");
    if (!file) {
        printf("Erro ao salvar pizzas.\n");
        return;
    }

    for (int i = 0; i < qtd_pizzas; i++) {
        fprintf(file, "%d\n%s\n%c\n%.2f\n%d\n",
                cardapio[i].id, cardapio[i].nome, cardapio[i].tamanho,
                cardapio[i].preco, cardapio[i].qtd_ingredientes);

        for (int j = 0; j < cardapio[i].qtd_ingredientes; j++) {
            fprintf(file, "%d\n%s\n%.2f\n",
                    cardapio[i].ingredientes[j].id,
                    cardapio[i].ingredientes[j].nome,
                    cardapio[i].ingredientes[j].preco);
        }
    }
    fclose(file);
}

// Carregar pizzas do arquivo
void carregarPizzas(Pizza *cardapio, int *qtd_pizzas) {
    FILE *file = fopen("pizzas.txt", "r");
    if (!file) {
        printf("Arquivo de pizzas nao encontrado. Comecando com um cardapio vazio.\n");
        return;
    }

    *qtd_pizzas = 0;
    while (fscanf(file, "%d\n%[^\n]\n%c\n%f\n%d\n",
                  &cardapio[*qtd_pizzas].id,
                  cardapio[*qtd_pizzas].nome,
                  &cardapio[*qtd_pizzas].tamanho,
                  &cardapio[*qtd_pizzas].preco,
                  &cardapio[*qtd_pizzas].qtd_ingredientes) != EOF) {

        for (int i = 0; i < cardapio[*qtd_pizzas].qtd_ingredientes; i++) {
            fscanf(file, "%d\n%[^\n]\n%f\n",
                   &cardapio[*qtd_pizzas].ingredientes[i].id,
                   cardapio[*qtd_pizzas].ingredientes[i].nome,
                   &cardapio[*qtd_pizzas].ingredientes[i].preco);
        }
        (*qtd_pizzas)++;
    }

    fclose(file);
}


int idExistePizza(Pizza *pizzas, int qtd_pizzas, int id) {
    for (int i = 0; i < qtd_pizzas; i++) {
        if (pizzas[i].id == id) {
            return 1; // ID já existe
        }
    }
    return 0; // ID não encontrado
}
