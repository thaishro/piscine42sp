/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhenriq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 16:18:00 by thhenriq          #+#    #+#             */
/*   Updated: 2024/07/30 12:48:29 by thhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if (!((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z' )))
			return (0);
		str++;
	}
	return (1);
}

/*int	main()
{
	char str1[] = "Quarentaedoissp";
	char str2[] = "42SaoPaulo";
	char str3[] = "";

	printf("ft_str_is_alpha(\"%s\") = %d\n", str1, ft_str_is_alpha(str1));
       	printf("ft_str_is_alpha(\"%s\") = %d\n", str2, ft_str_is_alpha(str2));
       	printf("ft_str_is_alpha(\"%s\") = %d\n", str3, ft_str_is_alpha(str3));

    return (0);
}*/
