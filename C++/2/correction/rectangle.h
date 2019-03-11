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

CRectangle::CRectangle()
{
  largeur = 0;
  longueur = 0;
}

CRectangle::CRectangle(int setLargeur, int setLongueur)
{
  largeur = setLargeur;
  longueur = setLongueur;
}

void CRectangle::setLargeur(int setLargeur)
{
  largeur = setLargeur;
}

void CRectangle::setLongueur(int setLongueur)
{
  longueur = setLongueur;
}

int CRectangle::getLargeur()
{
  return largeur;
}

int CRectangle::getLongueur()
{
  return longueur;
}

int CRectangle::perimetre()
{
  return largeur*2 + longueur*2;
}

int CRectangle::surface()
{
  return largeur * longueur;
}

void CRectangle::afficher()
{
  int i=0, e;
  while (i++ < longueur)
  {
    e = 0;
    while (e++ < largeur)
      cout << "*";
    cout << "\n";
  }
  cout << "\n";
}
