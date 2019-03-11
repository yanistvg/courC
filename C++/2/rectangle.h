#include <iostream>
using namespace std;

class CRectangle
{
  private:
    int largeur;
    int longueur;

  public:
    CRectangle();
    CRectangle(int setLargeur, int setLongueur);
    void setLargeur(int setLargeur);
    int  getLargeur();
    void setLongueur(int setLongueur);
    int  getLongueur();
    int  perimetre();
    int  surface();
    void afficher();
};
