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

/*This function takes in a string named s in this case, and will display the
 *string s on the standard output followed by a new line ('\n'). We do this by
 *calling out ft_putstr function previously made.
*/

void	ft_putendl(char const *s)
{
	ft_putstr(s);
	ft_putchar('\n');
}
