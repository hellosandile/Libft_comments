#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
/*{
	if (s1 == NULL || s2 == NULL)
		return (0);
	if (ft_strlen(s1) != ft_strlen(s2))
		return (0);
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (0);
		s1++;
		s2++;
	}
	return (1);
}
{
	int		i;
	if (s1 && s2)
	{
		i = 0;
		while (s1[i] != 0)
		{
			i++;
			if (s1[i] != s2[i])
				return (0);
		}
		return (1);
	}
	return (0);
}
{
	if (s1 == NULL || s2 == NULL)
		return (0);
	if (ft_strcmp(s1, s2) == 0)
		return (1);
	return (0);
}
*/

/*This is the working function that is submitted
 *
 * Description: Lexicographical comparison between s1 and s2.
 * If the 2 strings are identical the function returns 1, or 0
 * otherwise.
 *
 * Param 1: The first string to be compared
 * Param 2: The second string to be compared
 *
 * Return value: 1 or 0 according to if the 2 strings are
 * identical or not.
 *
 * */
{
	size_t	cnt;

	cnt = 0;
	if (s1 == s2)
		return (1);
	if (!s1 || !s2)
		return (0);
	while (s1[cnt] && s1[cnt] == s2[cnt])
		cnt++;
	if (s1[cnt] == s2[cnt])
		return (1);
	return (0);
}
