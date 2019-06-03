/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samkhize <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 14:14:40 by samkhize          #+#    #+#             */
/*   Updated: 2019/05/30 15:47:59 by samkhize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* *strchr(const char *s, int c)
 *
 * The strchr() function locates the first occurrence of c (converted to a char)
 * in the string pointed to by s. The terminating null character is considered
 * to be part of the string; therefore if c is '\0', the function locate the
 * terminating '\0'.
 *
 * The C library function char *strchr(const char *str, int c) searches for the
 * first occurrence of the character c (an unsigned char) in the string pointed
 * to by the argument str.
 *
 * Parameters
 *
 * str - This is the C string to be scanned
 * c - This is the character to be searched in str
 *
 * RETURN VALUES: The function strchr() returns a pointer to the located character,
 * or NULL if the character does not appear in the string.  */

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return ((char *) s + i);
		i++;
	}
	if (!c && s[i] == '\0')
		return ((char *)s + 1);
	return (NULL);
}

/*  Check and understand this funciton and main. This is
 *  another way to do it

#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *str, int c)
{
	while (*str != c)
	{
		if (*str == '\0')
			return (0);
		str++;
	}
	return ((char*)str);
}

int	main(void)
{
  int c = 'b';
	printf("%s\n", ft_strchr("bonbons", c));
	printf("%s\n", strchr("bonbons", c));
	return (0);
}

*/
