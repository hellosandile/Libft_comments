/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samkhize <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/01 13:13:32 by samkhize          #+#    #+#             */
/*   Updated: 2019/06/01 13:45:01 by samkhize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The memmove() function copies len bytes from string src to string dst. The two
 * strings may overlap; the copy is always done in a non-destructive manner.
 *
 * RETURN VALUES: The memmove() function returns the original value of dst  */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
void	ft_memmove(void *dst, const void *src, size_t len);
{
	char *tmp;

	tmp = (char *)malloc(sizeof(char) * len);
	if (tmp == NULL)
		return (NULL);
	ft_memcpy(tmp, src, len);
	ft_memcpy(dst, tmp, len);
	free(tmp);
	return (dst); // deallocates memory
}
