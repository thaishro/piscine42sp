/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhenriq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 12:43:33 by thhenriq          #+#    #+#             */
/*   Updated: 2024/08/01 12:53:19 by thhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}

/*#include <stdio.h>

int ft_strlen(char *str);

int main(void)
{
    char my_string[] = "Hello, 42SP!";
    int length;

    length = ft_strlen(my_string);
    printf("O comprimento da string é: %d\n", length);

    return 0;
}*/
