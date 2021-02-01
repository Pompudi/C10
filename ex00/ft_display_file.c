/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fadelia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 18:40:43 by fadelia           #+#    #+#             */
/*   Updated: 2021/02/01 19:27:33 by fadelia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_head.h"

int	check(int argc, int f)
{
	if (argc > 2)
	{
		write(1, MSG1, 20);
		return (1);
	}
	else if (argc < 2)
	{
		write(1, MSG2, 19);
		return (1);
	}
	if (f == -1)
	{
		write(1, MSG3, 18);
		return (1);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int		file;
	int		res;
	char	buf[1];

	file = open(argv[1], O_RDONLY, 0);
	if (check(argc, file) == 1)
		return (0);
	while (read(file, buf, 1) > 0)
	{
		write(1, buf, 1);
	}
	res = close(file);
	return (0);
}
