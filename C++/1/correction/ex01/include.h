#include <iostream>
using namespace std;

class Cpoint
{
  private:
    char l;
    float x, y;
  public:
    void saisie();
    void deplacer(float i, float e);
    void affiche();
};

void Cpoint::saisie()
{
  cout << "Entrer la lettre du point : ";
  cin >> l;
  cout << "Entrer sa position en x : ";
  cin >> x;
  cout << "Entrer sa position en y : ";
  cin >> y;
}

void Cpoint::deplacer(float i, float e)
{
  x += i;
  y += e;
}

void Cpoint::affiche()
{
  cout << "\t" << l << "(" << x << " , " << y << ")\n";
}


