/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samkhize <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/01 11:21:03 by samkhize          #+#    #+#             */
/*   Updated: 2019/06/12 09:12:05 by samkhize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* The memcpy() function copies n bytes from memory area src to memory area dst.
 * If dst and src overlap, behavior is undefined. Applications in which dst and src
 * might overlap should be use memove(3) instead.
 *
 * The C library function void *memcpy(void *str1, const void *str2, size_t n)
 * copies n characters from memory area str2 to memory area str1
 *
 * Parameters
 *
 * str1 - This pointer to the destination array where the content is to be copied,
 * type-casted to a pointer of type void*.
 * str2 - This is pointer to the source of data to be copied, type-casted to a pointer
 * of type void*.
 * n - This is the number of bytes to be copied
 *
 * RETURN VALUES: The memcpy() function returns the original value of dst  */

/* According to the man this function copies n bytes from memory area src to
 * memory are dst. If dst and src overlap, behaviour is undefined. Applications
 * in which dst and src might overlap should use ft_memmove instead. This function
 * returns the original value of dst*/

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	/*We start by making three variables. The first one will be our counter that
	 * we will be using to perform our loop and move through the index position
	 * of each given string. Because we will be doing our loop only as long as
	 * we are similar than the given size_t n we want to make sure we make our
	 * counter variable  a size_t as well as we can compare it to n. Next we
	 * make two char pointer variables. We set our counter to 0 and we cast our
	 * given parameter strings into char pointers and place them inside our d
	 * and s char pointer variables. Then we begin our loop*/
	size_t i;
	char *d;
	char *s;

	i = 0;
	d = (char *)dst; 
	s = (char *)src;
	/*At the beginning of the funciton we have to protect the src & dst because if
	 * they both don't have values then we must return NULL. If you don't protect it
	 * the program will crash as position does not exist yet*/
	if (src == NULL && dst == NULL)
		return (NULL);
	/*So long as our counter i is smaller than the given size_t n we want our loop
	 * to continue since we are copying n bytes from memory area src to memory
	 * area dst. Inside our loop we place index position i of s (which currently
	 * holds src) into index position i of d (which currently holds memory area
	 * dst). We increment our i and continue the loop until i is no longer smaller
	 * than n. We then return dst*/
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}

#include <stdio.h>
#include <string.h>

int main () {
   const char src[50] = "http://www.tutorialspoint.com";
   char dest[50];
   strcpy(dest,"Heloooo!!");
   printf("Before memcpy dest = %s\n", dest);
   ft_memcpy(dest, src, strlen(src)+1);
   printf("After memcpy dest = %s\n", dest);

   return(0);
}
