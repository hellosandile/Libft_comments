#include "libft.h"

/*Prototype: void  ft_putstr_fd(char nost *s, int fd);
 *Description: Outputs the string to the file descriptor fd.
 *Param. #1: The string to output.
 *Param. #2: The file descriptor.
 *Return value: None.
 *Libc function: write(2)*/

/*This function is excactly the same as our ft_putstr function except that we
 * are requiring a file descriptor in the parameter along with the desired
 * string to be written. As we do in our ft_putchar_fd function, we use a file
 * descriptor obtained from the open system call, or we can use 0, 1, or 2, to
 * refer to the standard input, standard output, or standard error. we use the
 * fd parameter as the fisrt parameter in our write functoin. We then place our
 * string as write's next parameter. Lest we use ft_strlen on our string so we
 * know how may bytes will need to be written, which is the same as the length
 * of the given string. Write will then write string s to the desired output.*/

void	ft_putstr_fd(char const *s, int fd)
{
	write(fd, s, ft_str_len(s));
}
