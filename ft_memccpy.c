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

/* The memccpy() function copies bytes from string src to string dst. If the 
 * character c (as converted to an unsigned. Char occurs in the string src, the 
 * copy stops and a pointer to the byte after the copy of c in the string dst is 
 * returned. Otherwise, n bytes are copied, and a NULL pointer is returned. 
 * The source and destination strings should not overlap, as the behaviir is undefined.
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

/* According to the man, this function copies bytes form string src to string dst.
 * If the character c (as converted to an unsigned char) occurs in the string src,
 * the copy stops and a pointer to the byte after the copy of c in the string dst
 * is returned. Otherwise, n bytes are copied, and a NULL pointer is returned. The
 * source and destination strings should not overlap, as the behaviour is undefind.*/

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	/* We start off this function the same way we did in our ft_memcpy function.
	 * We declare a size_t counter variable i that will be used to move through
	 * the indext position of our char casted strings and we will use this variable
	 * in comparison to our given size_t n. We also make two char pointer variables
	 * that we will place our casted dst and src parameters inside. We set i to 0
	 * to starts from the beginning index position and we place casted version of our
	 * parameters dst and src into their repsective variables. We then move to our
	 * loop*/
	size_t i;
	char *dst1;
	char *src1; 

	i = 0;
	dst1 = (char *)dst;
	src1 = (char *)src;
	/* While our variable counter i is less than the given n we will continue
	 * our loop. Inside we set index positon i of src1 into index position i of
	 * dst1. If the casted src1 usigned character at index position i is equal to
	 * the given c, that is also casted to an usigned char, then we immediately
	 * return a char casted pointer to the index position after it in our original
	 * given dst parameter. If we never come across c before i is no longer less
	 * than n we will return NULL.*/
	while (i < n)
	{
		dst1[i] = src1[i];
		if ((unsigned char)src1[i] == (unsigned char)c)
			return ((char *)dst + i + 1);
		i++;
	}
	return (NULL);
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
