/**/
#include <stdio.h>

int senha=0;
 
int main ()
{
    do
    {
        
        printf("digite sua senha: ");
        scanf("%d", &senha);
        
     if(senha !=1327)
        {
            printf("acesso negado. \n");
        }
    
    } 
    while (senha !=1327);
    printf("parabens, voce acertou a senha !!!!\n\n");
}