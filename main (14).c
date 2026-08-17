/**/
#include <stdio.h>

int numero;
 
int main (void)
{
    do
    {
        printf("digite um numero positivo: ");
        scanf("%d", &numero);
        
        if(numero <=0)
        {
            printf("valor invalido! tente novamente. \n");
        }
        
    } while (numero <=0);
    printf("parabens,voce digitou o numero %d.\n", numero);
}