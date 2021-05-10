#include <stdio.h>
#include <stdlib.h>

int main()
{
    char cadeia01[20];
    char cadeia02[20];
    int i;


    printf("Entre com a cadeia: ");
    fgets(cadeia01,20,stdin);

    for(i=0;cadeia01[i] != '\n';i++)
        cadeia02[i] = cadeia01[i];
    cadeia02[i] = '\0';

    printf("%s\n",cadeia01);
    printf("%s\n",cadeia02);
    return 0;
}
