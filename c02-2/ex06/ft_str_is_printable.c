/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhenriq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 12:10:00 by thhenriq          #+#    #+#             */
/*   Updated: 2024/07/30 13:22:16 by thhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if (*str < 32 || *str > 126)
			return (0);
		str++;
	}
	return (1);
}

/*int	main(void)
{
	char	str1[] = "Hello, World!";
	char	str2[] = "ç";
	char	str3[] = "";

	printf("ft_str_is_printable(\"%s\") = %d\n", str1, ft_str_is_printable(str1));
	printf("ft_str_is_printable(\"%s\") = %d\n", str2, ft_str_is_printable(str2));
	printf("ft_str_is_printable(\"%s\") = %d\n", str3, ft_str_is_printable(str3));
	return (0);
}*/
