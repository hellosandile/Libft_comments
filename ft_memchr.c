/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samkhize <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 11:28:07 by samkhize          #+#    #+#             */
/*   Updated: 2019/05/31 12:16:15 by samkhize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The memchr() function locates the first occurrence of c (converted to an unsigned
 * char) in string s
 *
 * The C library function void *memchr(const void *str, int c, size_t n) searches
 * for the first occurrence of the character c (an unsigned char) in the first
 * n bytes of the string pointed to, by the argument str
 *
 * str - This is the pointer to the block of memory where the search is performed
 * c - This is the value to be passed as an int, but the function performs a byte
 * per bytpe search using the unsigned char conversion of this value
 * n - This is the number of bytes to be analyzed
 *
 * RETURN VALUES: The memchr() function returns a pointer to the byte located, or
 * NULL if no such byte exists within n bytes. In otherwords, this function returns
 * a pointer to the matching byte or NULL if the character does not occur in the given
 * memory area.
 * */

#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	char *str;
	size_t i;

	i = 0;
	str = (char *)s;
	while (i < n)
	{
		if ((unsigned char)str[i] == (unsigned char)c)
			return ((char *)s + i);
					i++;
	}
	return (NULL);
}

#include <stdio.h>
#include <string.h>

int main () {
   const char str[] = "http://www.tutorialspoint.com";
   const char ch = '.';
   char *ret;

   ret = ft_memchr(str, ch, strlen(str));

   printf("String after |%c| is - |%s|\n", ch, ret);

   return(0);
}
