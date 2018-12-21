#include <stdio.h>

float racineCaree(float nb)
{
  float result = 0.01;

  // a complété
  
  return result;
}

int main(void)
{
  float nb, racineNb;

  printf("Entrer un nombre : ");
  scanf("%f", &nb);
  
  racineNb = racineCaree(nb);  // appelle de la fonction
  
  printf("La racine caree de %f est : %.2f\n", nb, racineNb);
  return 0;
}
