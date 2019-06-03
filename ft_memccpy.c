/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samkhize <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/01 11:46:48 by samkhize          #+#    #+#             */
/*   Updated: 2019/06/01 13:09:26 by samkhize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The memccpy() function copies bytes from string src to string dst. If the character
 * c (as converted to an unsigned. Char occurs in the string src, the copy stops
 * and a pointer to the byte after the copy of c in the string dst is returned. Otherwise,
 * n bytes are copied, and a NULL pointer is returned. The source and destination
 * strings should not overlap, as the behaviir is undefined  
 * 
 * The memccpy function (which stands for "copy bytes in memory") shall copy bytes
 * from the memory area src into dst, stopping after the first occurrence of byte c,
 * or after n bytes are copied, whichever comes first. 
 *
 * Parameters
 *
 * dst - It points to the location of a destination string
 * src - It points to the location of a source string.
 * c - It specifies a character for which to search and copy
 * n - It specifies the number of characters to be copied
 *
 * RETURN VALUES: The memccpy function returns a pointer to the next character in
 * dst after c or NULL if c was not found in the first n characters of src
 * */

/* INCOMPLETE */

#include <stdio.h>
#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t i;
	char *dst1;
	char *src1; 

	i = 0;
	dst1 = (char *)dst;
	src1 = (char *)src;
	while (i < n)
	{
		dst1[i] = src1[i];
		if ((unsigned char)src1[i] == (unsigned char)c)
					return ((char *)dst + i + 1);
							i++;
	}
}

#include <stdio.h>
#include <string.h>

char *msg = "This is the string: not copied";

void main() 
{

    char buffer[80];
    memset( buffer, '\0', 80 );
    ft_memccpy( buffer, msg, ':', 80 );
    printf( "%s\n", buffer ); 
}
