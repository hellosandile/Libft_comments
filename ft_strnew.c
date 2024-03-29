/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samkhize <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 09:17:27 by samkhize          #+#    #+#             */
/*   Updated: 2019/06/10 09:22:24 by samkhize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* This function allocates memory and returns a 'fresh' string that ends with
'\0'. Each character in the string is set to '\0' if the allocation fails the
function returns NULL. To do this we simply use our ft_memalloc function with
the size parameter given to our function. We make sure cast it as a char string
because that is what we want to return and we have to add + 1 to our size_t to
compensate for the terminating '\0'. NOTE: We are able to set each character in
the string to '\0' because our ft_memalloc uses our ft_bzero*/

char	*ft_strnew(size_t size)
{
	return ((char *)ft_memalloc(size + 1));
}

// Also possible to be done this way

char	*ft_strnew(size_t size)
{
	char	*s;

	if (!(s = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	ft_memset(s, '\0', size + 1);
	return (s);
}

