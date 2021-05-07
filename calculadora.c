#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    float op1,op2;
    float resultado=0.0;
    int operacao;
    bool opinval = false;

    printf("Entre com o operando 01:");
    scanf("%f",&op1);
    printf("Entre com o operando 02:");
    scanf("%f",&op2);

    printf("(1) - Soma\n");
    printf("(2) - Subtracao\n");
    printf("(3) - Multiplicacao\n");
    printf("(4) - Divisao\n");
    printf("Entre com a opcao: ");
    scanf("%d",&operacao);
    switch(operacao) {
        case 1: resultado = op1+op2;
                break;
        case 2: resultado = op1-op2;
                break;
        case 3: resultado = op1*op2;
                break;
        case 4: if (op2>0) resultado = op1/op2;
                   else {
                     opinval = true;
                     printf("Operando 2 inválido para a divisao");
                   }
                break;
        default: printf("Operacao invalida!\n");
    }
    if ((operacao >=1) && (operacao <=4) && (!opinval))
         printf("Resultado da operação: %f",resultado);
    return 0;
}
