/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 14:20:29 by pteh              #+#    #+#             */
/*   Updated: 2023/08/08 14:37:26 by pteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <string.h>
#include <stdio.h>*/

unsigned int	ft_strlen(char *str)
{
	unsigned int	count;

	count = 0;
	while (*str)
	{
		str++;
		count++;
	}
	return (count);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	total_len;
	unsigned int	i;

	i = 0;
	dest_len = ft_strlen(dest);
	total_len = 0;
	total_len = dest_len + ft_strlen(src);
	if (size <= ft_strlen(dest))
		return (size + ft_strlen(src));
	else
	{
		while (i < (size - dest_len - 1))
		{
			dest[dest_len + i] = src[i];
			i++;
		}
	}
	dest[size - 1] = '\0';
	return (total_len);
}
/*
int	main(void)
{
	char a[20] = "Hello";
	char *b = "Wor";
	char *d = "Worldly";
	unsigned int c = 11;
	unsigned int e = 3;

	printf("pre trans a: %s\n", a);
	printf("str(\"Hello\", \"Wor\", 11): %d \n", ft_strlcat(a, b, c));
	printf("str(\"Hello\", \"Worldly\", 11): %d \n", ft_strlcat(a, d, c));
	printf("str(\"Hello\", \"Wor\", 3): %d \n", ft_strlcat(a, b, e));
	return(0);
}*/
