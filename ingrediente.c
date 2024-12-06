#include <stdio.h>
#include <string.h>
#include "ingrediente.h"




// Remover ingrediente
void removerIngrediente(Ingrediente *ingredientes, int *qtd_ingredientes) {
    int id, encontrado = 0;

    if (*qtd_ingredientes == 0) {
        printf("Nenhum ingrediente para remover.\n");
        return;
    }

    printf("Digite o ID do ingrediente que deseja remover: ");
    scanf("%d", &id);

    for (int i = 0; i < *qtd_ingredientes; i++) {
        if (ingredientes[i].id == id) {
            encontrado = 1;

            // Shift dos elementos seguintes
            for (int j = i; j < *qtd_ingredientes - 1; j++) {
                ingredientes[j] = ingredientes[j + 1];
            }

            (*qtd_ingredientes)--;
            printf("Ingrediente removido com sucesso!\n");
            break;
        }
    }

    if (!encontrado) {
        printf("Erro: Ingrediente com ID %d não encontrado.\n", id);
    }
}

// Visualizar ingredientes
void visualizarIngredientes(Ingrediente *ingredientes, int qtd_ingredientes) {
    if (qtd_ingredientes == 0) {
        printf("Nenhum ingrediente cadastrado.\n");
        return;
    }

    printf("\nLista de Ingredientes:\n");
    for (int i = 0; i < qtd_ingredientes; i++) {
        printf("ID: %d\n", ingredientes[i].id);
        printf("Nome: %s\n", ingredientes[i].nome);
        printf("Preço: %.2f\n", ingredientes[i].preco);
        printf("----------------------\n");
    }
}


void editarIngrediente(Ingrediente *ingredientes, int qtd_ingredientes) {
    int id, encontrado = 0;
    printf("Digite o ID do ingrediente a ser editado: ");
    scanf("%d", &id);

    for (int i = 0; i < qtd_ingredientes; i++) {
        if (ingredientes[i].id == id) {
            encontrado = 1;
            printf("Editando ingrediente: %s\n", ingredientes[i].nome);
            printf("Digite o novo nome do ingrediente: ");
            scanf(" %[^\n]", ingredientes[i].nome);
            printf("Digite o novo preco do ingrediente: ");
            scanf("%f", &ingredientes[i].preco);
            printf("Ingrediente editado com sucesso!\n");
            break;
        }
    }

    if (!encontrado) {
        printf("Ingrediente com ID %d não encontrado.\n", id);
    }
}



void salvarIngredientes(Ingrediente *ingredientes, int qtd_ingredientes) {
    FILE *file = fopen("ingredientes.txt", "w");
    if (!file) {
        printf("Erro ao salvar ingredientes.\n");
        return;
    }

    for (int i = 0; i < qtd_ingredientes; i++) {
        fprintf(file, "%d\n%s\n%.2f\n", ingredientes[i].id, ingredientes[i].nome, ingredientes[i].preco);
    }

    fclose(file);
    printf("Ingredientes salvos com sucesso!\n");
}


void carregarIngredientes(Ingrediente *ingredientes, int *qtd_ingredientes) {
    FILE *file = fopen("ingredientes.txt", "r");
    if (!file) {
        printf("Arquivo de ingredientes não encontrado. Começando com lista vazia.\n");
        return;
    }

    *qtd_ingredientes = 0;
    while (fscanf(file, "%d\n%[^\n]\n%f\n", &ingredientes[*qtd_ingredientes].id,
                  ingredientes[*qtd_ingredientes].nome, &ingredientes[*qtd_ingredientes].preco) != EOF) {
        (*qtd_ingredientes)++;
    }

    fclose(file);
    printf("Ingredientes carregados com sucesso!\n");
}
void adicionarIngrediente(Ingrediente *ingredientes, int *qtd_ingredientes) {
    int id;
    printf("Digite o ID do ingrediente: ");
    scanf("%d", &id);

    // Verificar duplicação de ID
    if (idExisteIngrediente(ingredientes, *qtd_ingredientes, id)) {
        printf("Erro: ID já utilizado. Tente novamente com um ID diferente.\n");
        return;
    }

    // Adicionar o novo ingrediente
    ingredientes[*qtd_ingredientes].id = id;
    printf("Digite o nome do ingrediente: ");
    scanf(" %[^\n]", ingredientes[*qtd_ingredientes].nome);
    printf("Digite o preco do ingrediente: ");
    scanf("%f", &ingredientes[*qtd_ingredientes].preco);

    (*qtd_ingredientes)++;
    printf("Ingrediente adicionado com sucesso!\n");
}

int idExisteIngrediente(Ingrediente *ingredientes, int qtd_ingredientes, int id) {
    for (int i = 0; i < qtd_ingredientes; i++) {
        if (ingredientes[i].id == id) {
            return 1; // ID já existe
        }
    }
    return 0; // ID não encontrado
}
