/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samkhize <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/01 13:52:21 by samkhize          #+#    #+#             */
/*   Updated: 2019/06/01 13:52:26 by samkhize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The bzero() function erases the data in the n bytes of the memory starting at
the location pointed to by s, by writing zeros (bytes containing '\0' to that area
*/

void		ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
