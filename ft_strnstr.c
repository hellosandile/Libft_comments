/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samkhize <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/01 13:54:11 by samkhize          #+#    #+#             */
/*   Updated: 2019/06/01 13:54:15 by samkhize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
/*This is my function with the NULL error on Libfttest*/
{
  size_t  i;
  size_t  j;
  
  i = 0;
  if (haystack[i] == '\0')
    return (NULL);
  if (!needle[0] || needle == haystack)
    return ((char *)haystack);
  j = 0;
  while (i + j < len && haystack[i] != '\0')
  {
    j = 0;
    while (haystack[i + j] == needle[j])
      j++;
    if (needle[j] == '\0')
      return ((char *)haystack + i);
    i++;
  }
  return (NULL);
}
/*Submitted function*/
{
  size_t  i;
  size_t  j;
  
  i = 0;
  if (!needle[0] || needle = haystack)
    return ((char *)haystack);
  while (i < len && haystack[i] != '\0')
  {
    j = 0;
    while (i +j < len && hayst:ack[i + j] == needle[j] && needle[j] != '\0')
      j++;
    if (needle[j] == '\0')
      return ((char *)haystack + i);
    i++;
  }
  return (NULL);
}
