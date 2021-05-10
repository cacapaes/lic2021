#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

#define ANDARES 20
#define QUARTOS 14

int main()
{
    bool hotel[20][14];
    int andar, apto;
    int opcao;
    bool fim = false;  // sentinela que controla o fim do programa
    bool entradaValida= false; // sentinela que controla se a entrada é válida ou não
    float taxaOcupacao, ocupados;

    //inicializa a ocupação do hotel
    for(andar = 0; andar < ANDARES; andar++)
       for(apto = 0; apto < QUARTOS; apto++)
            hotel[andar][apto] = false;

    do {

	    printf("\n(1) - Fazer o check-in\n");
        printf("(2) - Fazer o check-out\n");
        printf("(3) - Mostrar a ocupação do hotel\n");
        printf("(4) - Taxa de ocupação do hotel\n");
        printf("(5) - Sair do programa\n");
        printf("Entre com a opção: ");
        scanf("%d",&opcao);

        switch (opcao)
        {
            case 1: do {
                      printf("Entre com o numero do andar (1 a 20): ");
                      scanf("%d",&andar);
                      printf("Entre com o nomero do apto (1 a 14): ");
                      scanf("%d",&apto);
                      if ((andar >= 1 && andar <= ANDARES) && (apto >= 1 && apto <= QUARTOS)) {
                        if (hotel[andar-1][apto-1]) // verifica se quarto está ocupado ou não
                           printf("O apartamento %d do andar %d está ocupado!\n",apto,andar);
                        else {
                           hotel[andar-1][apto-1] = true; // aloca o quarto para o hospede
                           printf("Apartamento %d do andar %d foi alocado com sucesso!\n",apto,andar);
                           entradaValida = true;
                        }
                      }
                      else
                          printf("O numero do quarto e/ou andar está inválido!\n");
                    } while (!entradaValida );
                     break;

           case 2:   do {
                      printf("Entre com o numero do andar (1 a 20): ");
                      scanf("%d",&andar);
                      printf("Entre com o nomero do apto (1 a 14): ");
                      scanf("%d",&apto);
                      if ((andar >= 1 && andar <= ANDARES) && (apto >= 1 && apto <= QUARTOS)) {
                        if (!hotel[andar-1][apto-1]) // verifica se quarto está ocupado ou não
                           printf("O apartamento %d do andar %d já está livre!\n",apto,andar);
                        else {
                           hotel[andar-1][apto-1] = false; // desaloca o quarto
                           printf("Apartamento %d do andar %d foi desalocado com sucesso!\n",apto,andar);
                           entradaValida = true;
                        }
                      }
                      else
                          printf("O numero do quarto e/ou andar está inválido!\n");
                    } while (!entradaValida );
                     break;

          case 3: for(andar = 0; andar < ANDARES; andar++)
                        {
                        printf("Andar %2d\n", andar+1);
                        for(apto = 0; apto < QUARTOS; apto++)
                            printf("%d   ", hotel[andar][apto]);
                        printf("\n");
                        }
                     break;
          case 4:  for(andar = 0, ocupados = 0.0; andar < ANDARES; andar++)
                        for(apto = 0; apto < QUARTOS; apto++)
                          if (hotel[andar][apto]) ocupados++;
                    taxaOcupacao = (ocupados/(ANDARES*QUARTOS))*100;
                    printf("A taxa de ocupação do hotel é de : %f",taxaOcupacao);
                    break;
          case 5:   fim = true;
                    break;
          default:
                printf("Opcao do menu invalida\n");

        }
    } while (!fim);

    return 0;
}

