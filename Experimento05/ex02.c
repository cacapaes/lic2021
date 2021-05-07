#include <stdio.h>
#include <stdlib.h>

#define N 10

int main()
{
    char cadeia[N];
    char cadeiaInvertida[N];
    char c;
    int n;

    printf("Entre com a cadeia de até 4 caracteres: ");
    fgets(cadeia,N,stdin);
    for(n=0;cadeia[n] != '\n';n++)
        cadeiaInvertida[n] = cadeia[n]; // copiando uma cadeia na outra cadeia de char
    c = cadeiaInvertida[0];
    cadeiaInvertida[0] = cadeiaInvertida[n-1];
    cadeiaInvertida[n-1] = c;
    cadeiaInvertida[n] = '\0';
    printf("%s\n",cadeia);
    printf("%s\n",cadeiaInvertida);

    return 0;
}
