/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhenriq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 18:36:18 by thhenriq          #+#    #+#             */
/*   Updated: 2024/07/31 19:08:27 by thhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	char			*dest_end;

	i = 0;
	dest_end = dest;
	while (*dest_end != '\0')
	{
		dest_end++;
	}
	while (i < nb && src[i] != '\0')
	{
		dest_end[i] = src[i];
		i++;
	}
	dest_end[i] = '\0';
	return (dest);
}

/*int main(void)
{
    char dest[50] = "Hello, ";
    char src[] = "world! How are you?";

     ft_strncat(dest, src, 6);
    printf("Resultado da concatenação: %s\n", dest);

    return 0;
}*/
