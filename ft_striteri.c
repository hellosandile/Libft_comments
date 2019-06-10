/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samkhize <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 10:26:42 by samkhize          #+#    #+#             */
/*   Updated: 2019/06/10 11:37:30 by samkhize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* This function applies the parameter function to each chatacer of a string also
 * passed in it's parameter at at precisely that character's index string position.
 * Each character that is passed into the function f is modified if necessary.  */

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	/* We start by creating our counter variable i as an usigned variable to
	 * compensate for the possibility of a long string.  */
	unsigned int i;

	/* We then start at the beginng of our string and work our way until the end,
	 * applying the function f to each character. When our loop reaches the end
	 * of the string the function is finished  */
	i = 0;
	while (s[i] != '\0')
	{
		f(i, s + i);
		i++;
	}
}
