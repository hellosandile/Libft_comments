/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samkhize <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 10:57:10 by samkhize          #+#    #+#             */
/*   Updated: 2019/08/07 10:57:12 by samkhize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* This function takes in the parameter of an address to a chain of
characters that should be freed and then set to NULL.*/

void	ft_strdel(char **as)
{
	if (as != NULL)
	{
		free(*as);
		*as = NULL;
	}
}


//Look up an understand why this is also a way to do it

void		ft_strdel(char **as)
{
	ft_memdel((void **)as);
}
