/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prb1.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 16:14:57 by souchane          #+#    #+#             */
/*   Updated: 2023/12/21 20:17:00 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int add(int par, ...)
{
	int i;
	int nbr;
	va_list ar;
	i = 0;
	nbr = 0;
	va_start(ar, par);
	while(i < par)
	{
		nbr = nbr + va_arg(ar, int);
		va_arg(ar, int);
		i++;
	}
	va_end(ar);
	return (nbr);
}
// int main()
// {
// 	int nbr;
// 	nbr = add(5, 5, 6, 7, 5, 9);
// 	printf("%d\n", nbr);
// }