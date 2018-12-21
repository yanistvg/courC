#include <unistd.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}

int main(void)
{
  char *phrase = "salut comment ca va ?";
  
  // ecrire un programme pour ecrire le contenue de phrase a l'aide de la fonction ft_putchar donc caractere par caractere
}
