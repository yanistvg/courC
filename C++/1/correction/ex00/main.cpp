#include <iostream>

using namespace std;

int main(void)
{
  const int MAX_TAB = 10;
  int i, e=0;
  int tab[MAX_TAB];
  for (i=0; i < MAX_TAB; i++)
  {
    cout << "Entrer la valeur de la case " << i+1 << " : ";
    cin >> tab[i];
  }
  for (i=0; i < MAX_TAB; i++)
    if (tab[i] >= 8)
      e++;
  cout << "Ils y a " << e << " nombre qui sont superieur ou egal a 8\n";
  return 0;
}
