//* programa for */
#include <stdio.h>
 int numero;

 int main()
 {
     printf("\ndigite um numero par entre 0 a 10: ");
     scanf("%i", &numero);
    switch(numero)
{
    case 2: 
        printf("acertou\n");
        break;
    case 4:
        printf("acertou\n");
        break;
    case 6:
    case 8:
    case 10:
        printf("acertou\n");
        break;
    default:
        printf("vai de six seven pra farmar mais aura...\n");
}
}
