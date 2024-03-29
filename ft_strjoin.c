/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samkhize <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 09:33:32 by samkhize          #+#    #+#             */
/*   Updated: 2019/06/11 10:44:40 by samkhize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* This function allocaes memory and returns a new string terminated by a '\0' which
 * is the result of a concatenation of the parameters s1 and s2. If the allocation
 * fails the function will return NULL.  */

char	*ft_strjoin(char const *s1, char const *s2)
{
	/* We begin by declaring three variables. The first two will be counters we will
	 * use to move through our strings. The third is the new string that will be
	 * allocating memory to in order to return the concatenation of our parameter strings.*/
	int	i;
	int	k;
	char	*str;
	/* We set both of the counter variables to 0 since we will want both counters
	 * to start at the beginning of their respective strings. We then allocate memory
	 * using the malloc function with a combination of using our previously made
	 * ft_strlen function. We use the ft_strlen function on both the parameter strings
	 * to figure our the full length for a concatenation and we add 1 to this added length
	 * to make sure we can add a terminating '\0'. IF the allocation failed we will
	 * return NULL. */
	i = 0;
	j = 0;
	if (s1 == NULL || s2 == NULL) // Protect functions at the top of your program
		return NULL;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (str == NULL)
		return (NULL);
	/* If the allocation worked we begin our concatenation of our given strings. We
	 * start with s1 with a standard string loop saying that as long as we have not
	 * reached the end of the string, continue. We place the index of both our new
	 * string str and our parameter s1 at i which at this moment is 0. We then run
	 * through the length of s1 placing each character in s1 into str. Once this has
	 * finished we continue to the next loop.*/
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	/* This next loop is exactly the same as the previous loop except you must take
	 * note of our use of the counter variable j. j is currently equal to 0 at this point
	 * in our function. For our new string str we set the index position we ended
	 * on when our previous loop finished since it will be the value i was at the end
	 * of the previous loop plus j's current value of 0. We use j to set the index of
	 * our string s2 and let the loop go until we have reached the end of s2. Once the
	 * end of s2 has been reached we add a terminating '\0' to the end of our fresh string
	 * and return the new string which is a fresh concatenation ofo our parameters.*/
	while (s2[j] != '\0')
	{
		str[i +j] = s2[j];
		j++;
	}
	str[i + j] = '\0';
	return (str);
}


/*Another way to do this is*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		len;

	len = ft_strlen(s1) + ft_strlen(s2);
	str = (char *)malloc(sizeof(*str) * (len + 1));
	if (str == NULL)
		return (NULL);
	ft_strcpy(str, s1);
	ft_strcat(str, s2);
	return (str);
}
