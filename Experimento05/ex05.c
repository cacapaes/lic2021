#include <stdio.h>
#include <stdlib.h>

#define TMAX 20

int main()
{
    int qtdColunas;
    float val[10]; // valores do histograma
    int barra[10]; // tamanho das barras
    int i,j;
    float maiorValor = 0.0;

     do {
        printf("Digite a quantidade de colunas (maximo 10): ");
        scanf("%d",&qtdColunas);
     } while (qtdColunas > 10);

    for(i=0;i<qtdColunas;i++) {
        printf("Valor para a coluna %d: ",i+1);
        scanf("%f",&val[i]);
        if (val[i] > maiorValor) maiorValor = val[i];
    }

    for(i=0;i<qtdColunas;i++)
        barra[i] = val[i]*TMAX/maiorValor;

    printf("\nHISTOGRAMA\n");
    printf("----------\n");
    for(i=0;i<qtdColunas;i++) {
        printf("%d\t ",(int) val[i]);
        for(j=0;j<barra[i];j++)
            printf("X");
        printf("\n");
    }

    return 0;
}
