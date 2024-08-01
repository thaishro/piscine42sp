/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhenriq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 11:41:30 by thhenriq          #+#    #+#             */
/*   Updated: 2024/07/30 12:55:55 by thhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)

{
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if (!(*str >= '0' && *str <= '9'))
			return (0);
		str++;
	}
	return (1);
}

/*int main()
{
        char str1[] = "123456789";
        char str2[] = "42SP";
        char str3[] = "";

        printf("teste(\"%s\") = %d\n", str1, ft_str_is_numeric(str1));
        printf("teste(\"%s\") = %d\n", str2, ft_str_is_numeric(str2));
        printf("teste(\"%s\") = %d\n", str3, ft_str_is_numeric(str3));

    return (0);
}*/
