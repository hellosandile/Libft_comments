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

#include "libft.h"

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

/* According to the man this function locates the first occurence of c (converted
 * to an unsinged char) in string s. ft_memchar returns a pointer to the bytes
 * located, or NULL if no such byte exists within n bytes.*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	/*We start by creating a char pointer str that we will be placing a casted
	 * version of our s parameter into. We also create a size_t variable i that
	 * we will use as a counter. We make it size_t in order to compare it to the
	 * given size_t n in our loop condition. We then say i equal to 0 since we
	 * will also be using it to start at the beginning of our string str. We cast
	 * s as a char pointer and place it inside our str variable. We then enter
	 * our loop*/
	char *str;
	size_t i;

	i = 0;
	str = (char *)s;
	/*While our i variable is less than the parameter n we will have our loop
	 * continue. Inside we want to see if the current index position that has
	 * been casted as an unsigned char is equual to the parameter c that has
	 * also been casted as an unsigned char. If this statement is true we will
	 * return a char casted pointer to the index position that contains c. If
	 * i is no longer less than n and we still have not located c, we will return
	 * NULL*/
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
