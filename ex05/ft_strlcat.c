/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 14:20:29 by pteh              #+#    #+#             */
/*   Updated: 2023/08/07 16:41:55 by pteh             ###   ########.fr       */
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
	unsigned int	size_count;
	unsigned int	original_dest_len;
	char			*original_dest;
	char			*original_src;

	original_dest = dest;
	original_dest_len = ft_strlen(original_dest);
	original_src = src;
	size_count = 0;
	if (size <= ft_strlen(dest))
		return (size + ft_strlen(src));
	else
	{
		while (size_count++ < size)
		{
			dest++;
			if (*dest == '\0' && *src != '\0')
			{
				*dest = *src;
				src++;
			}
		}
		*dest = '\0';
	}
	return (original_dest_len + ft_strlen(original_src) + 1);
}
/*
int	main(void)
{
	char a[20] = "Hello";
	char *b = "Wor";
	unsigned int c = 11;

	printf("pre trans a: %s\n", a);
	printf("str(\"Hello\", \"World\", 11): %d \n", ft_strlcat(a, b, c));
	printf("post trans a: %s\n", a);
}*/
