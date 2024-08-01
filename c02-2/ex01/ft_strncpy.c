/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhenriq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 15:17:00 by thhenriq          #+#    #+#             */
/*   Updated: 2024/07/30 17:27:17 by thhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy( char *dest, char *src, unsigned int n)
{
	unsigned int	count;

	count = 0;
	while (count < n && src[count] != '\0')
	{
		dest[count] = src [count];
		count++;
	}
	while (count < n)
	{
		dest[count] = '\0';
		count++;
	}
	return (dest);
}

/*#include <stdio.h>
int main()
{
	char src[] = "Hello, World!";
	char dest[20];

	ft_strncpy(dest, src, 5);
	dest[5] = '\0';
	printf("src: %s\n", src);
	printf("dest: %s\n", dest);

	return 0;
}*/
