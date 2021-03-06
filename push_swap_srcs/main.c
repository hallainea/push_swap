/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <ahallain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 22:01:23 by ahallain          #+#    #+#             */
/*   Updated: 2021/03/09 21:34:54 by ahallain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "../utils/lib.h"

int		main(int argc, char **argv)
{
	t_number	number;

	(void)argc;
	argv++;
	if (!*argv)
		return (0);
	number = (t_number){parse(argv), 0};
	if (!number.a)
	{
		ft_putstr_fd("Error\n", 2);
		return (1);
	}
	if (!check(number.a))
		sort(&number);
	freeitem(number.a);
	freeitem(number.b);
	return (0);
}
