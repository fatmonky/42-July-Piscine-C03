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

#include <string.h>
#include <stdio.h>

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

int	main(void)
{
	char a[20] = "Hello";
	char *b = "Wor";
	unsigned int c = 11;

	printf("pre trans a: %s\n", a);
	printf("str(\"Hello\", \"World\", 11): %d \n", ft_strlcat(a, b, c));
	printf("post trans a: %s\n", a);
}

/*
a. **Correct Behavior of strlcat**:

The `strlcat` function is used to concatenate strings safely. It is designed to append the contents of the source string to the destination string while ensuring that the resulting concatenated string fits within the specified buffer size. The function guarantees that the destination string is null-terminated and that it does not exceed the specified size.

b. **Fixing the ft_strlcat Function**:

Your code has the right idea, but it needs a few adjustments to correctly reproduce the behavior of `strlcat`. Here's the corrected version of your `ft_strlcat` function:

```c
#include <string.h>
#include <stdio.h>

unsigned int ft_strlen(char *str)
{
    unsigned int count = 0;
    while (*str)
    {
        str++;
        count++;
    }
    return count;
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int dest_len = ft_strlen(dest);
    unsigned int src_len = ft_strlen(src);
    unsigned int total_len = dest_len + src_len;
    
    if (size <= dest_len)
        return (src_len + size);
    
    for (unsigned int i = 0; src[i] && i < size - dest_len - 1; i++)
    {
        dest[dest_len + i] = src[i];
    }
    
    dest[dest_len + size - dest_len - 1] = '\0';
    
    return total_len;
}

int main(void)
{
    char a[20] = "Hello";
    char *b = "Wor";
    unsigned int c = 11;

    printf("pre trans a: %s\n", a);
    printf("strlcat(\"Hello\", \"Wor\", 11): %u\n", ft_strlcat(a, b, c));
    printf("post trans a: %s\n", a);

    return 0;
}
```

Key Changes Made:

1. Calculate `src_len` and `total_len` (sum of lengths of destination and source).
2. Use a loop to copy characters from `src` to `dest`, considering the size limit.
3. Ensure null-termination by adding it after copying.
4. Return `total_len` instead of size.

This corrected code should now behave like the `strlcat` function. It safely concatenates the source string to the destination string, ensuring the total length does not exceed the specified size while maintaining null-termination.

*/
