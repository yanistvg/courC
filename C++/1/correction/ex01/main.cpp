#include "include.h"

int main(void)
{
  Cpoint point;
  float x, y;
  point.saisie();
  point.affiche();
  cout << "Entrer le deplacement en x : ";
  cin >> x;
  cout << "Entrer le deplacement en y : ";
  cin >> y;
  point.deplacer(x, y);
  point.affiche();
  return 0;
}
