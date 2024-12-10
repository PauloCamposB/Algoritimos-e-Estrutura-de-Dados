#include <stdio.h>
#include "pizza.h"
#include "ingrediente.h"

int main() {
    Pizza cardapio[100];  // Array para armazenar até 100 pizzas
    Ingrediente ingredientes[50];  // Array para armazenar até 50 ingredientes
    int qtd_pizzas = 0, qtd_ingredientes = 0;

    // Carrega dados dos arquivos ao iniciar
    carregarPizzas(cardapio, &qtd_pizzas);


    int opcao;
    do {
        printf("\nMenu:\n");
        printf("1. Adicionar Pizza\n");
        printf("2. Visualizar Pizzas\n");
        printf("3. Editar Pizza\n");
        printf("4. Remover Pizza\n");
        printf("5. Salvar Dados\n");
        printf("6. Adicionar Ingrediente\n");
        printf("7. Visualizar Ingredientes\n");
        printf("8. Editar Ingrediente\n");
        printf("9. Remover Ingrediente\n");
        printf("10. Vender Pizza\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");

        printf("\n");
        printf("Nao esqueca de salvar os dados ao final.");
        printf("\n");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                adicionarPizza(cardapio, &qtd_pizzas);
                break;
            case 2:
                visualizarPizzas(cardapio, qtd_pizzas);
                break;
            case 3:
                editarPizza(cardapio, qtd_pizzas);
                break;
            case 4:
                removerPizza(cardapio, &qtd_pizzas);
                break;
            case 5:
                salvarPizzas(cardapio, qtd_pizzas);
                printf("\nDados salvos com sucesso!\n");
                break;

            case 6:
                adicionarIngrediente(ingredientes, &qtd_ingredientes);
                break;
            case 7:
                visualizarIngredientes(ingredientes, qtd_ingredientes);
                break;
            case 8:
                editarIngrediente(ingredientes, qtd_ingredientes);
                break;
            case 9:
                removerIngrediente(ingredientes, &qtd_ingredientes);
                break;
            case 10:
                venderPizza(cardapio, qtd_pizzas, ingredientes, qtd_ingredientes);
                break;

            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != 0);

    return 0;
}


void venderPizza(Pizza *cardapio, int qtd_pizzas, Ingrediente *ingredientes, int qtd_ingredientes) {
    int id_pizza, qtd_extras, id_extra;
    float preco_final = 0;
    int encontrado = 0;

    if (qtd_pizzas == 0) {
        printf("Nenhuma pizza disponível para venda.\n");
        return;
    }

    printf("Digite o ID da pizza a ser vendida: ");
    scanf("%d", &id_pizza);

    for (int i = 0; i < qtd_pizzas; i++) {
        if (cardapio[i].id == id_pizza) {
            encontrado = 1;
            preco_final = cardapio[i].preco;
            printf("Pizza selecionada: %s (Preço Base: %.2f)\n", cardapio[i].nome, cardapio[i].preco);
            break;
        }
    }

    if (!encontrado) {
        printf("Pizza com ID %d não encontrada.\n", id_pizza);
        return;
    }

    printf("Quantos ingredientes extras deseja adicionar? ");
    scanf("%d", &qtd_extras);

    for (int i = 0; i < qtd_extras; i++) {
        printf("Digite o ID do ingrediente extra %d: ", i + 1);
        scanf("%d", &id_extra);

        encontrado = 0;
        for (int j = 0; j < qtd_ingredientes; j++) {
            if (ingredientes[j].id == id_extra) {
                preco_final += ingredientes[j].preco;
                printf("Ingrediente %s (%.2f) adicionado.\n", ingredientes[j].nome, ingredientes[j].preco);
                encontrado = 1;
                break;
            }
        }

        if (!encontrado) {
            printf("Ingrediente com ID %d não encontrado.\n", id_extra);
        }
    }

    printf("Venda concluida! Preco final: %.2f\n", preco_final);
}

