#include <stdio.h>
#include <stdlib.h>

int main()
{
    float altura,peso;
    float imc;

    printf("Entre com a sua altura:");
    scanf("%f",&altura);
    printf("Entre com o seu peso:");
    scanf("%f",&peso);
    imc = peso/(altura*altura);

    printf("O seu IMC é %f\n",imc);
    if(imc < 18.5) {
        printf("O seu peso está baixo!\n");
    } else {
        if (imc < 25.0)
            printf("O seu peso está normal!\n");
        else
            printf("Você está com sobrepeso!\n");
    }
    return 0;
}
