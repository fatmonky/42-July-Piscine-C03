/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C0305main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 16:42:35 by pteh              #+#    #+#             */
/*   Updated: 2023/08/07 16:43:07 by pteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>*/

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char a[20] = "Hello";
	char *b = "Wor";
	unsigned int c = 11;

	printf("pre trans a: %s\n", a);
	printf("str(\"Hello\", \"World\", 11): %d \n", ft_strlcat(a, b, c));
	printf("post trans a: %s\n", a);
}
