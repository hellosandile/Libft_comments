/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samkhize <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/01 13:13:32 by samkhize          #+#    #+#             */
/*   Updated: 2019/06/12 10:46:40 by samkhize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The memmove() function copies len bytes from string src to string dst. The two
 * strings may overlap; the copy is always done in a non-destructive manner.
 *
 * Copies len characters from the object pointed to by src into the object pointed 
 * to by dst. The copy is performed as if the characters were first copied from 
 * the object pointed to by src into a temporary array and then from the 
 * temporary array into the object pointed to by dst. 
 * A pointer to the resulting object is returned.
 *
 * RETURN VALUES: The memmove() function returns the original value of dst  */

void	ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*charsrc;
	unsigned char	*chardst;
	size_t	i;

	if (src == dst)
		return (dst);
	charsrc = (unsigned char *)src;
	chardst = (unsigned char *);
	if (src < dst)
	{
		i = len;
		while (i-- > 0)
		{
			chardst[i] = charsrc[i];
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			chardst[i] = charsrc[i];
			i++;
		}
	}
	return (dst);
}
