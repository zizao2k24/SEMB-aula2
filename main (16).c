/**/
#include <stdio.h>

int senha, tentativa=0;
 
int main ()
{
    do
    {
        
        printf("digite sua senha\n");
        scanf("%i", &senha);
        tentativa++;
        
    }
     while(senha !=1327 && tentativa<3);
        
     if(senha ==1327) printf("acesso liberado !!!! \n\n");
        else printf("limite de tentativas excedido\n\n");
}
     