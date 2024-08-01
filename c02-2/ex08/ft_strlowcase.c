/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhenriq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 12:26:11 by thhenriq          #+#    #+#             */
/*   Updated: 2024/07/30 13:11:01 by thhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	char	*ptr;

	ptr = str;
	while (*ptr != '\0')
	{
		if (*ptr >= 'A' && *ptr <= 'Z')
		*ptr = *ptr - ('A' - 'a');
	ptr++;
	}
	return (str);
}

/*int     main(void)
{
    char    str1[] = "QUARENTA E DOIS SP";
    char    str2[] = "HELLO 42";

    printf("ft_strlowcase(\"%s\") = \"%s\"\n", str1, ft_strlowcase(str1));
    printf("ft_strlowcase(\"%s\") = \"%s\"\n", str2, ft_strlowcase(str2));
    return (0);
}*/
