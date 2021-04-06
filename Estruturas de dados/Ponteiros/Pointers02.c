#include <stdio.h>

void soma (int, int, int *);

int main (void){
int iValorA;
int iValorB;
int iResultado;

printf ("Entre com os valores:");
scanf ("%d %d", &iValorA, &iValorB);
printf("Endereco de iResultado = %x\n", &iResultado);

soma (iValorA, iValorB, &iResultado);/* est� sendo passado o endere�o de mem�ria da vari�vel, qualquer altera��o estar� sendo realizada na mem�ria */
printf ("Soma : %d\n", iResultado);
system("pause");
return 0;
}


void soma (int piValorA, int piValorB, int * piResultado){
printf("Endereco de piResultado = %x\n", piResultado);
/* o valor est� sendo colocado diretamente na mem�ria*/
*piResultado = piValorA + piValorB;
return;
}
