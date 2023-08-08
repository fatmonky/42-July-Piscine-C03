/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 16:51:05 by pteh              #+#    #+#             */
/*   Updated: 2023/08/08 19:34:55 by pteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stddef.h>

char	*find_substring(char *str, char *to_find)
{
	char	*found_subst;
	char	*orig_to_find;

	found_subst = NULL;
	orig_to_find = to_find;
	while (*str)
	{
		if (*str == *to_find)
		{
			found_subst = str;
			while ((*str == *to_find) && (*to_find != '\0'))
			{
				str++;
				to_find++;
			}
			if (*to_find == '\0')
				return (found_subst);
			else
				to_find = orig_to_find;
		}
		else
			str++;
	}
	return (NULL);
}

char	*ft_strstr(char *str, char *to_find)
{
	if (*to_find == '\0')
		return (str);
	else
	{
		return (find_substring(str, to_find));
	}
}

int	main(void)
{
	char *a = "Hello World";
	char *b = "World";
	char *c = "Word";
	char *d = "";
	char *e = "Hello World Word";

	printf("str: %s \n", a);
	printf("ft_strstr(\"Hello World\", \"World\": %s \n", ft_strstr(a, b));
	printf("ft_strstr(\"Hello World\", \"Word\": %s \n", ft_strstr(a, c));
	printf("ft_strstr(\"Hello World Word\", \"Word\": %s \n", ft_strstr(e, c));
	printf("ft_strstr(\"Hello World\", \"\": %s \n", ft_strstr(a, d));
	printf("strstr(\"Hello World\", \"World\": %s \n", strstr(a, b));
	printf("strstr(\"Hello World\", \"Word\": %s \n", strstr(a, c));
	printf("strstr(\"Hello World Word\", \"Word\": %s \n", strstr(e, c));
	printf("strstr(\"Hello World\", \"\": %s \n", strstr(a, d));

}

