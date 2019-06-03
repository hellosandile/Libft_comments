/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samkhize <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/01 11:21:03 by samkhize          #+#    #+#             */
/*   Updated: 2019/06/01 11:46:04 by samkhize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t i;
	char *d;
	char *s;

	i = 0;
	d = (char *)dst; 
	s = (char *)src;
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
