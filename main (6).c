/**/
#include <stdio.h>
float M, A, B;
float number = 3.14;

int main()
{
  while (1)
  {
      printf("\n\nPrograma de soma. \n");
      printf("entre com o primeiro numero: ");
      scanf("%f", &A);
      printf("entre com o segundo numero: ");
      scanf("%f", &B);
      M = (A + B)/2;
      printf("sua média é: %.2f", M);
      if(M >= 50) printf("que arraso, você passou.\n\n");
      else if (M > 46) printf("vish, você passará pelo conselho");
      else printf("ih, reprovou. \n\n");
      
      
     
  }
}