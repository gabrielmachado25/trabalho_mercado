#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

struct Mercado
{
    char nomeProduto[70];
    char validadeProduto[50];
    float precoProduto;
    float quantidadeEstoque;
};

//DECLARANDO STRUCT
struct Mercado produtos[30]; //colocar para 30 DEPOIS
int count, op;

int adicionarProdutos()
{
    int count;
    for(count = 0 ; count < 30 ; count++)
    {
        fflush(stdin);
        printf("\nNome do produto %d: ", count+1);
        gets(produtos[count].nomeProduto); //LER E SALVAR O NOME APRESENTADO
        printf("Data de validade do produto (DD.MM.AAAA): ");
        gets(produtos[count].validadeProduto); //LER E SALVAR A DATA DE VALIDADE DO PRODUTO
        printf("Preço do produto: R$ ");
        scanf("%f", &produtos[count].precoProduto); //LER E SALVAR O PREÇO DO PRODUTO
        printf("Quantidade em estoque: ");
        scanf("%f", &produtos[count].quantidadeEstoque); //LER E SALVAR A QUANTIDADE DO PRODUTO DISPONÍVEL EM ESTOQUE
    }
}

int imprimirListaProdutos()
{
    int count;
    for(count = 0 ; count < 30 ; count++)
    {
        printf("\nPRODUTO %d\n", count+1);
        printf("Nome do produto: %s\n",produtos[count].nomeProduto);
        printf("Preço: R$ %.2f\n",produtos[count].precoProduto);
        printf("Quantidade em estoque: %.f\n",produtos[count].quantidadeEstoque);
        printf("Data de validade: %s\n", produtos[count].validadeProduto);
    }
}

int procurarProduto()
{
    int dados;
    printf("\n");
    printf("Informe o número do produto que você deseja obter os dados: \n");
    scanf("%d", &dados);
    printf("\nPRODUTO %d\n", dados);
    printf("Nome do produto: %s\n",produtos[dados].nomeProduto);
    printf("Preço: R$ %.2f\n",produtos[dados].precoProduto);
    printf("Quantidade em estoque: %.f\n",produtos[dados].quantidadeEstoque);
    printf("Data de validade: %s\n", produtos[dados].validadeProduto);
    printf("\n");

}

int finalizarPrograma()
{
    printf("\n");
    printf("---- ELABORADO POR ARTHUR POSTAI E GABRIEL MACHADO ----");
    printf("\n");
    printf("\n");
}


int main(void)
{

    setlocale(LC_ALL,"Portuguese");

    do
    {
        printf("\n");
        printf("----- BEM-VINDO AO PROGRAMA PARA CADASTRO DE PRODUTOS -----\n");
        printf("-------------------- MERCADO FEEVALE ----------------------\n");
        printf("\n");
        printf("1 - Adicionar produto\n");
        printf("2 - Imprimir lista de produtos\n");
        printf("3 - Procurar produto\n");
        printf("4 - Finalizar programa\n");
        printf("DIGITE A OPÇÃO DESEJADA: ");

        do
        {
            scanf("%d", &op);
        }
        while(op<0 && op>4);   //verificar se selecionou entre 1 e 4, senão volta

        printf("\n");
        switch (op)
        {
        case 1:
            printf("1 - ADICIONAR PRODUTO");
            adicionarProdutos();
            system("cls");
            break;
        case 2:
            printf("2 - IMPRIMIR LISTA DE PRODUTOS");
            imprimirListaProdutos();
            break;
        case 3:
            printf("3 - PROCURAR PRODUTO");
            procurarProduto();
            break;
        case 4:
            printf("\n");
            printf("PROGRAMA ENCERRADO");
            printf("\n");
            printf("\n");
            finalizarPrograma();
            printf("\n");
            printf("\n");
            printf("\n");
            break;
            default:
            printf(" \nVocê digitou uma opção inválida!");
            printf("\n");
            printf("\n");

        }
    }
    while (op != 4);
    return 0;
}

