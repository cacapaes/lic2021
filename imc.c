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

    printf("O seu IMC � %f\n",imc);
    if(imc < 18.5) {
        printf("O seu peso est� baixo!\n");
    } else {
        if (imc < 25.0)
            printf("O seu peso est� normal!\n");
        else
            printf("Voc� est� com sobrepeso!\n");
    }
    return 0;
}
