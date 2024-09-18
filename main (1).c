#include <stdio.h>
#include "fila.h"
#include <math.h>
//esse programa expoe apenas a ideia politica do aluno
int main (void)
{
Fila* f = cria();
insere(f,77.0);
insere(f,50.0);
insere(f,40.0);
insere(f,55.0);

printf("imprimindo a fila de candidados:\n");
imprime(f);

retira(f);
retira(f);
printf("\n--------------\n");
printf("SEGUNDO TURNO\n");
printf("--------------\n");
imprime(f);

retira(f);

printf("\n--------------\n");
printf("CANDIDADO VENCEDOR\n");
printf("--------------\n");
imprime(f);
printf("Com 55\%% dos votos");

printf("\n\nPara o trabalho nao parar, 55 na hora de votar!\n");


return 0;
}
