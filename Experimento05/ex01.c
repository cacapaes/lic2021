#include <stdio.h>
#include <stdlib.h>

int main()
{
    char cadeiaChar[10];
    char cadeiaCharInvertida[10];
    int n=0,j,i;

    printf("Entre com uma cadeia de até 10: ");
    fgets(cadeiaChar,10,stdin);
    for(n=0;cadeiaChar[n] != '\n';n++); // contando a quantidade de char da string
    for(i=n-1,j=0;i>=0;i--,j++)
        cadeiaCharInvertida[j] = cadeiaChar[i];
    cadeiaCharInvertida[n] = '\0';

    printf("%s\n",cadeiaChar);
    printf("%s\n",cadeiaCharInvertida);

    return 0;
}
