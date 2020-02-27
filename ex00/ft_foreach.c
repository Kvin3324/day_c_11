/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjoya <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 15:22:59 by kjoya             #+#    #+#             */
/*   Updated: 2020/02/27 09:45:33 by kjoya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putnbr(int n)
{
	printf("%d", n);
}

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int		i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}


int main(int argc, char **argv)
{
	int tab[] = {-25, 15, 48, 32};
//	printf("%d", ft_foreach(tab, 1337, ft_putnbr));
				
	ft_foreach(tab, 17, &ft_putnbr);
				
}
