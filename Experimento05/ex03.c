#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[20];
    char sobrenome[20];
    char nomeCompleto[40]; // concatenção dos vetores nome e sobrenome
    int qtdChaNomeCompleto = 0;
    int i,j;


    printf("Entre com o nome: ");
    fgets(nome,20,stdin);
    printf("Entre com o sobrenome: ");
    fgets(sobrenome,20,stdin);

    for(i=0;nome[i] != '\n';i++)
        nomeCompleto[i] = nome[i];
    nomeCompleto[i] = ' ';
    i++;
    qtdChaNomeCompleto = qtdChaNomeCompleto + i;
    for(i=qtdChaNomeCompleto,j=0;sobrenome[j] != '\n';i++,j++)
        nomeCompleto[i] = sobrenome[j];
    nomeCompleto[i] = '\0';
    qtdChaNomeCompleto = i;
    printf("%s\n",nomeCompleto);
    printf("%d\n",qtdChaNomeCompleto);
    printf("%c\n",nomeCompleto[0]);
    printf("%c\n",nomeCompleto[qtdChaNomeCompleto-1]);

    return 0;
}
