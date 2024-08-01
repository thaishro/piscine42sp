/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhenriq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 13:02:34 by thhenriq          #+#    #+#             */
/*   Updated: 2024/07/26 16:37:43 by thhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_numbers(void)
{
	char	a;

	a = '9';
	while (a <= '0')
	{
		write(1, &a, 1);
		a = a - 1;
	}
}

int     main(void)
{
        ft_print_numbers();
        return (0);
}
