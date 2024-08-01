/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhenriq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 14:38:28 by thhenriq          #+#    #+#             */
/*   Updated: 2024/07/29 16:17:32 by thhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	char	*original_dest;

	original_dest = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (original_dest);
}

/*int	main(void)
{
	char	src[] = "Hello, world!";
	char	dest[20];

	ft_strcpy(dest, src.10);
	dest [10] = '\0';
	printf("string original: %s\n", src);
	printf("string copiada: %s\n", dest);
	return (0);
}*/
