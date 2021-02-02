/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fadelia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 17:23:39 by fadelia           #+#    #+#             */
/*   Updated: 2021/02/02 18:08:17 by fadelia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cat.h"

void	no_arg(void)
{
	char s[1];

	while (read(0, s, 1))
		write(1, s, 1);
}

void	cat_file(int file)
{
	char buf[1];

	while (read(file, buf, 1) > 0)
		write(1, buf, 1);
	close(file);
}

void	check(int err, char *argv)
{
	write(1, CAT, 5);
	ft_putstr(argv);
	write(1, ": ", 2);
	write(1, strerror(err), ft_strlen(strerror(err)));
	write(1, "\n", 1);
}

int		main(int argc, char **argv)
{
	int		file;
	int		count;
	char	*name;

	count = 1;
	if (argc == 1)
	{
		no_arg();
		return (0);
	}
	while (count < argc)
	{
		name = basename(argv[count]);
		if (name[0] != '-')
		{
			file = open(argv[count], O_RDONLY, 0);
			if (file < 0)
				check(errno, name);
			cat_file(file);
		}
		else
			no_arg();
		count++;
	}
}
