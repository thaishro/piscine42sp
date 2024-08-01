/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhenriq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 17:48:28 by thhenriq          #+#    #+#             */
/*   Updated: 2024/07/31 18:23:03 by thhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*dest_end;

	dest_end = dest;
	while (*dest_end != '\0')
	{
		dest_end++;
	}
	while (*src != '\0')
	{
		*dest_end = *src;
		dest_end++;
		src++;
	}
	*dest_end = '\0';
	return (dest);
}

/*#include <stdio.h>
int main(void)
{
    char dest[50] = "Hello, ";
    char src[] = "world!";

    
    ft_strcat(dest, src);
    printf("Resultado da concatenação: %s\n", dest);

    return 0;
}*/
