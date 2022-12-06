#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#include "gestaoComputadores.h"


char menu();

int main()
{

    menu();


    return 0;
}


char menu()
{
    char opcao;

    printf("\n\t\tGESTAO DA REQUISACAO DE COMPUTADORES\n");
    printf("\t\t____________________________________");
    printf("\n\n\n»»Quantidade de portateis existentes: %d\n", MAX_COMPUTADORES);
    printf("\n»»Quantidade total pedidos efetuados:****\n");
    printf("\n»»Quantidade total de requisicoes efetuadas:****\n");
    printf("\n»»Quantidade de requisicoes ativas:****\n");



    scanf(" %c", opcao);
    opcao = toupper(opcao);

    return opcao;
}
