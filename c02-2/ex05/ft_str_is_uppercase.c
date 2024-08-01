/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhenriq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 11:58:17 by thhenriq          #+#    #+#             */
/*   Updated: 2024/07/30 12:59:59 by thhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if (*str < 'A' || *str > 'Z')
			return (0);
		str++;
	}
	return (1);
}

/*int	main(void)
{
	char	str1[] = "HELLO";
	char	str2[] = "hello";
	char	str3[] = "";

	printf("ft_str_is_uppercase(\"%s\") = %d\n", str1, ft_str_is_uppercase(str1));
	printf("ft_str_is_uppercase(\"%s\") = %d\n", str2, ft_str_is_uppercase(str2));
	printf("ft_str_is_uppercase(\"%s\") = %d\n", str3, ft_str_is_uppercase(str3));
	return (0);
}*/
