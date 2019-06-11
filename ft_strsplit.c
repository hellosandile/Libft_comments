/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samkhize <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 12:50:00 by samkhize          #+#    #+#             */
/*   Updated: 2019/06/11 16:18:07 by samkhize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*This function will allocate memory and return a 'fresh' table of strings (all
 * terminated by a '\0', the table as well) as a result of the splitting of the
 * given string by the given character c. If memory allocation fails at any point
 * the function will return NULL. An example of this function is 
 * ft_strsplit("*hello*fellow***students*", '*'). This should return a table that
 * splits the string int ["hello", "fellow", "students"]. This function
 * must be done in three parts. We will start at the ft_strsplit function at the
 * bottom. We put ft_strsplit at the end of our code because in order to ue other
 * functions we make specifically for it we have to make sure we have them made
 * before we get to our actual function. */

/* The first function we have is a word counting function. We make this because
 * we will need to figure our how many strings we will be placing into our table
 * that's to be returned from the ft_strsplit function. We want this for when we
 * allocate memory for the table.*/
static int		ft_countword(char const *s, char c)
{
	/*We start by creating two variables. The first is an unsigned int i which
	 * we will use to mve through the string that was given to ft_strsplit. We use
	 * unsigned int in the event we get a really long string. We also make a counter
	 * variable we will be using to count the words in the string and then we will
	 * return it. NOTE: This function returns a static int. A static variable keeps
	 * its value between invocations. We use this for cases where a function needs
	 * to keep same state between invocations. We set both of our variables to 0 and
	 * begin our function.  */
	unsigned int i;
	int counter;

	i = 0;
	counter = 0;
	/* Add notes */
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			counter++;
		while (s[i] && (s[i] != c))
			i++;
	}
	return (counter);
}


/*Add notes*/

static char		*ft_strndup(const char *s, size_t n)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * n + 1);
	if (str == NULL)
		return (NULL);
	str = ft_strcpy(str, s, n);
	str[n] = '\0';
	return (str);
}


/*With the two previous functions made we are now ready to begin our
 * real function, ft_strsplit */

char		**ft_strsplit(char const *s, char c)
{
	/*Add notes*/
	int	i;
	int j;
	int k;
	char	**tab;

	i = 0;
	k = 0;
	tab = (char **)malloc(sizeof(char *) * (ft_cntwrd(s, c)) + 1);
	if (tab == NULL)
		return (NULL);
	/*Notes*/
	while (s[i])
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > j)
		{
			tab[k] = ft_strndup(s + j, i - j);
			k++;
		}
	}
	tab[k] = NULL;
	return (tab);
}
