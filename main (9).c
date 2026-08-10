/* programa for */
#include <stdio.h>
int tab;

int main()
{
    while(1)
    {
    printf("qual tabuada deseja? ");
    scanf("%i", &tab);
    
    for( int cont = 1; cont <= 10 ; cont++ )
    {
        printf("%i x %i = %i \n", tab, cont, tab*cont);
    }
  }
}