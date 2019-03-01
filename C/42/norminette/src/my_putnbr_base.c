/*
** EPITECH PROJECT, 2017
** my_putnbr_base
** File description:
** Converts a number to a given base and returns it
*/

#include "my.h"
#include "functions.h"
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

char	*my_putnbrbase(unsigned int nbr, char const *base)
{
	int	nb_of_chars = 0;
	char	all_chars[32];
	char	*new_nbr;
	int	counter = 0;

	do {
		all_chars[counter] = base[nbr % strlen(base)];
		nb_of_chars++;
		nbr = nbr / strlen(base);
		counter++;
	} while (nbr > 0);
	new_nbr = malloc(nb_of_chars + 1);
	if (new_nbr == 0) {
		printf("Error while adding stack trace entry :\n\t\tCouldn't malloc %iB\n", nb_of_chars + 1);
		exit(84);
	}
	nbr = 0;
	for (int i = nb_of_chars - 1 ; i >= 0 ; i--) {
		new_nbr[nbr] = all_chars[i];
		nbr++;
	}
	new_nbr[nb_of_chars] = 0;
	return (new_nbr);
}

int	my_putnbr_base(unsigned int nbr, char const *base)
{
	char	*str = my_putnbrbase(nbr, base);
	int	chars_disp = write(1, str, strlen(str));

	free(str);
	return (chars_disp);
}
