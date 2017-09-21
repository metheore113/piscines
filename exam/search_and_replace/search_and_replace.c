/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlamarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 11:31:11 by tlamarqu          #+#    #+#             */
/*   Updated: 2017/09/21 12:19:39 by tlamarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

char	putstr(char *str)
{
	int a;

	a = 0;
	while (str[a] != '\0')
	{
		ft_putchar(str[a]);
		a++;
	}
	return (0);
}

int	main(int ac, char **av)
{
	if ( ac != 4)
		ft_putchar('\n');
	
	else if ( av[2][0] != av[1][0] && av[1][1] && av[1][2])
	{
		putstr(av[1]);
	return (0);
	}

	else
	{
		putstr("Tout est ok !");
	}
	return (0);
}
