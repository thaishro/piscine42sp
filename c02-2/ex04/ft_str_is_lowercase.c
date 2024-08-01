/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhenriq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 11:51:06 by thhenriq          #+#    #+#             */
/*   Updated: 2024/07/30 12:58:56 by thhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if (*str < 'a' || *str > 'z')
			return (0);
		str++;
	}
	return (1);
}

/*int	main(void)
{
	char	str1[] = "hello";
	char	str2[] = "Hello";
	char	str3[] = "";

	printf("ft_str_is_lowercase(\"%s\") = %d\n", str1, ft_str_is_lowercase(str1));
	printf("ft_str_is_lowercase(\"%s\") = %d\n", str2, ft_str_is_lowercase(str2));
	printf("ft_str_is_lowercase(\"%s\") = %d\n", str3, ft_str_is_lowercase(str3));
	return (0);
}*/
