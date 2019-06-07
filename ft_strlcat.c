/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samkhize <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/01 13:49:50 by samkhize          #+#    #+#             */
/*   Updated: 2019/06/01 13:51:38 by samkhize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/* The strlcpy() and strlcat() functions copay and concatenate strings respectively.
They are designed to be safer, more consistent, and less error prone replacements
for strncpy(3) and strncat(3). THe strlcat() function appends the NUL-terminated
string src to the end of dst. It will append at most size - strlen(dst) - 1 bytes,
NUL-terminating the results

strlcat() appends string src to the end of dst.  It will append at most
dstsize - strlen(dst) - 1 characters.  It will then NUL-terminate, unless
dstsize is 0 or the original dst string was longer than dstsize (in prac-
tice this should not happen as it means that either dstsize is incorrect
or that dst is not a proper string).

RETURN VALUES: The strlcpy() and strlcat() functions return the total length of
the string they tried to create. For strlcpy() that means the length of src.
For strlcat() that means the initial length of dst plus the length of src.*/

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t j;
	size_t k;

	j = 0;
	k = 0;
	while (dst[j] && j < size)
		j++;
	while ((src[k] && ((j + k + 1) < size))
	{
		dst[j + k] = src[k];
		k++;
	}
	if (j != size)
		dst[j + k] = '\0';
	return (j + ft_strlen(src));
	
}
