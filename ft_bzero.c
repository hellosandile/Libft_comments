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
 * the location pointed to by s, by writing zeros (bytes containing '\0' to that
 * area.
 *
 * RETURN VALUE: None.*/

/* According to the man this function writes len zeroed byted to the string s. If
 * len is zero, ft_bzero does nothing. Another way of saying this is that we will
 * be making a string of size len and filling each index position with a 0. We use
 * our previously made ft_memset function to do this. Review ft_memset to understand
 * how it works and notice the parameters we give it here when we call it. We set
 * it ahead of time to fill whatever string at size len with 0s.*/

void		ft_bzero(void *s, size_t len)
{
	ft_memset(s, 0, len);
}
