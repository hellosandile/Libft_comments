/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samkhize <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 10:50:42 by samkhize          #+#    #+#             */
/*   Updated: 2019/08/07 10:50:46 by samkhize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*This function will display the string s on the standard output followed by a
 * new line. We do this by using our ft_putstr and ft_putchar functions that we
 * previously made. We use our ft_putstr on our string s to display it on the
 * standard output. Then we use our ft_putchar to have our string followed by
 * a new line*/

void	ft_putendl(char const *s)
{
	ft_putstr(s);
	ft_putchar('\n');
}
