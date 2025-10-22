#include <stdio.h>
#include <string.h>
#include <string.h>


typedef struct alunos{
    char nome[50];
    float nota;

}alunos;

void editar_notas(alunos a[], int n);


int main (){
    char op;

    FILE *arquivo;
    arquivo = fopen("notas.txt","w");

    int n;

    printf("Digite a quantidade de alunos: ");
    scanf("%d",&n);
    getchar();


    alunos a[n];



    for(int i = 0; i<n;i++){
        printf("\nDigite o nome do aluno %d: ",i+1);
        fgets(a[i].nome,50,stdin);
        a[i].nome[strcspn(a[i].nome, "\n")] = '\0';

        printf("Digite a nota desse aluno: ");
        scanf("%f", &a[i].nota);
        getchar();





    fprintf(arquivo,"Aluno: %s Nota: %.2f\n",a[i].nome, a[i].nota);
    fprintf(arquivo, "==============\n");


    }
    fclose(arquivo);

    printf("\nQuer editar alguma nota ? ");
    scanf("%c",&op);
    getchar();


    if(op == 's'){
    editar_notas(a,n);
    }else{
    return 0;
    }
}




void editar_notas(alunos a[],int n){
    FILE *arquivo;
    char troca[50];
    int encotrado = 0;


    printf("\nDigite o nome do aluno que vc quer trocar a nota: ");
        fgets(troca,50,stdin);
            troca[strcspn(troca, "\n")] = '\0';


    for(int i = 0; i < n; i++){
        if(strcmp(a[i].nome,troca) == 0){
            printf("\nA nota atual desse aluno e: %.2f", a[i].nota);
            printf("\nDigite a nova nota do aluno: ");
            scanf("%f", &a[i].nota);
            getchar();



    arquivo = fopen("notas.txt", "w");
    for (int j = 0; j < n; j++) {
                fprintf(arquivo, "Aluno: %s Nota: %.2f\n", a[j].nome, a[j].nota);
            }


    fclose(arquivo);
    printf("\nnotas editadas com sucesso!!");



        }
    }







}






