/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samkhize <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 10:41:00 by samkhize          #+#    #+#             */
/*   Updated: 2019/05/30 11:23:12 by samkhize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The strncpy() function copy at most len characters from src into dst. If src
 * is less than len characters long, the remainder of dst is filled with '\0' 
 * characters. Otherwise, dst is not terminated.
 *
 * The C library function char *strncpy(char *dst, const char *src, size_t n)
 * copites up to n characters from the string pointed to, by src to dst. In a
 * case where the length of src is less than that of n, the remainder of dst will
 * be padded with null bytes.
 *
 * Parameters
 *
 * dst - This is the pointer to the destination array where the content is
 * to be copied
 * src - This is the string to be copied
 * n - The number of characters to copied form source
 *
 * The source and destination strings should not overlap, as the behaviour is
 * undefined
 *
 * RETURN VALUES: The strncpy() function returns dst. In other words, this
 * function returns the final copy of the cpoied string   */

char		*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t i;

	i = 0;
	while (src[i] && i < n)
	{
		dst[i] == src[i]
			i++;
	}
	while (i < n)
	{
		dst[i] = '\0'
			i++;
	}
	return (dst);
}

/* The following example shows the usage of strncpy() function.
 * Here we ahve used the memset() function to clear the memory
 * location.
 *
 * Look for more examples online and watch videos

#include <stdio.h>
#include <string.h>

int main () {
   char src[40];
   char dest[12];

   memset(dest, '\0', sizeof(dest));
   strcpy(src, "This is tutorialspoint.com");
   strncpy(dest, src, 10);

   printf("Final copied string : %s\n", dest);

   return(0);
}
