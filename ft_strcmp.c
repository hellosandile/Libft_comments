/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samkhize <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 14:57:12 by samkhize          #+#    #+#             */
/*   Updated: 2019/05/30 09:55:22 by samkhize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The strcmp() and strncmp() functions lexicographically compare the null-terminated
 * strings s1 and s2. 
 *
 * The strcmp() compares two strings character by character. If the first character of
 * two strings are equal, next character of two strings are compared. This continues
 * until the correspnding characters of two strings are different or a null character
 * "\0' is reached.
 *
 * Lexicographical order: In mathematics, the lexicographic or lexicographical order
 * (also known as lexical order, dictionary order, alphabetical order or lexicographic(al) product)
 * is a generalisaiton of the way words are alphabetically ordered based on the
 * alphabetical order of their component letters. 
 *
 * RETURN VALUES: The strcmp() and strncmp() functions return an integer greater than,
 * equal to, or less than 0, according as the string s1 is greater than, eqaul to,
 * or less than the string s2. The comparison is done using unsigned characters, so that
 * '\200' is greater than '\0'.
 * */

int		ft_strcmp(const char *s1, const char *s2)
{
	unsigned int i;

	i = 0;

	while (s1[i] != '\0' && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*
 *
 * This is an example to see how you would use the strcmp function
 * is a C program *

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[])
{
    * Create a place to store our results /
    int result;

    * Create two arrays to hold our data /
    char example1[50];
    char example2[50];

    * Copy two strings into our data arrays /
    strcpy(example1, "C programming at TechOnTheNet.com");
    strcpy(example2, "C programming is fun");

    * Compare the two strings provided /
    result = strcmp(example1, example2);

    * If the two strings are the same say so /
    if (result == 0) printf("Strings are the same\n");

    * If the first string is less than the second say so
     (This is because the 'a' in the word 'at' is less than
     the 'i' in the word 'is' /
    if (result < 0) printf("Second string is less than the first\n");

    return 0;
}

*/
