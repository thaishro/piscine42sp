/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhenriq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 12:17:51 by thhenriq          #+#    #+#             */
/*   Updated: 2024/07/30 13:02:12 by thhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	char	*ptr;

	ptr = str;
	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
		*ptr = *ptr - ('a' - 'A');
		}
	ptr++;
	}
	return (str);
}

/*int	main()
{
	char	str1[] = "quarenta e dois sp";
	char	str2[] = "hello 42";

	printf("ft_strupcase(\"%s\") = \"%s\"\n", str1, ft_strupcase(str1));
	printf("ft_strupcase(\"%s\") = \"%s\"\n", str2, ft_strupcase(str2));
	return (0);
}*/
