/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhenriq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 17:50:37 by thhenriq          #+#    #+#             */
/*   Updated: 2024/07/31 19:22:14 by thhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>  // para NULL

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	j;

	if (*to_find == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j] && to_find[j] != '\0')
		{
			j++;
		}
		if (to_find[j] == '\0')
			return (str + i);
		i++;
	}
	return (NULL);
}

/*#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
    char str[] = "Hello, world!";
    char to_find[] = "Hello";
    char *result;

    result = ft_strstr(str, to_find);
    if (result)
        printf("Substring encontrada: %s\n", result);
    else
        printf("Substring não encontrada.\n");

    return (0);
}*/
