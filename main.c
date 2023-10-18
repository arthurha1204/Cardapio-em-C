/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int codigo;
    float preco, valor_total;
    int quantidade;

    // Exibe o cardápio
    printf("Cardapio:\n");
    printf("Codigo   Especificacao   Preco\n");
    printf("100      Cachorro Quente 1.20\n");
    printf("101      Bauru Simples   1.30\n");
    printf("102      Bauru com Ovo   1.50\n");
    printf("103      Hamburguer      1.20\n");
    printf("104      Cheeseburguer   1.70\n");
    printf("105      Suco            2.20\n");
    printf("106      Refrigerante    1.00\n");

    // Solicita ao usuário o código do produto e a quantidade desejada
    printf("Digite o codigo do produto: ");
    scanf("%d", &codigo);

    printf("Digite a quantidade desejada: ");
    scanf("%d", &quantidade);

    // Calcula o valor total com base no código do produto
    switch (codigo) {
        case 100:
            preco = 1.20;
            break;
        case 101:
            preco = 1.30;
            break;
        case 102:
            preco = 1.50;
            break;
        case 103:
            preco = 1.20;
            break;
        case 104:
            preco = 1.70;
            break;
        case 105:
            preco = 2.20;
            break;
        case 106:
            preco = 1.00;
            break;
        default:
            printf("Codigo de produto invalido.\n");
            return 1;  // Encerra o programa com código de erro
    }

    // Calcula o valor total a ser pago
    valor_total = preco * quantidade;

    // Exibe o valor total
    printf("Valor a ser pago: %.2f\n", valor_total);

    return 0;
}
