/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samkhize <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 13:37:20 by samkhize          #+#    #+#             */
/*   Updated: 2019/06/10 16:44:19 by samkhize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* This function allocates memory and returns a new copy of a portion of the string
 * passed in the parameter. The portion begins at the index parameter of start and
 * will have the length of the parameter len. If start and len do not designate a
 * portion of a valid string the behavior is undefined. If the memory allocation
 * fails the function will return NULL  */

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	/* We begin by declaring two variables. The first, i, will be our counter
	 * and in an unsigned int to compensate for the possibility of a longer string than
	 * an int could count through. We also declare a char pointer str which will hold
	 * our fresh string that we will be returning.  */
	unsigned int i;
	char	*str;
	/* We set our counter at 0 because we will be comparing it to len in our loop
	 * condition and we are assuming that len will at least be 1. We then allocate
	 * memory for our future string by using malloc. NOTE: that we are suing len
	 * variable for the size of the memeory allocation and adding 1 to it in order
	 * to make a space to terminate our new string with '\0' because mallox takes
	 * the literal spacing needed and strings begin at position 0. We then check
	 * to make sure that the allocation worked. If it failed we return NULL. If not
	 * we continue in our loop  */
	i = 0;
	str = (char *)malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return NULL;
	/* We beign our loop by setting a condition for the loop to last as long as our
	 * counter i is less than the given len parameter. As long as this is true we will
	 * then take the parameter and we will add the current value of our counter i to it
	 * in order to move along the parameter string and place the corresponding character
	 * into the new string. NOTE: by using i to move through our parameter string we can
	 * start at position 0 in our new string and place the charcter at our desired start
	 * index of string s into the allocated space of our new string. Once the loop has
	 * finished we will add a terminating '\0' to the new string and then return it.  */
	if (s == NULL) // unsigned int starts at 0 so there is no need to protect it
		return NULL;
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
