#include <stdio.h>

struct info
{
  char prenom[30];
  char nom[30];
  int  age;
};

void prenomNom(struct info *P)
{
  // a completer pour demender le prenom puis le nom et le strocket dans la structure
}

int  main(void)
{
  struct info personne;
  
  prenomNom(&personne);
  
  // a completer
    // demende age de la personne et le stocke dans la strut personne
  
  
  printf("nom : \nprenom : \nage : \n");
  return 0;
}
