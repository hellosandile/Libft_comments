/* The free() function frees the memory space pointer to by ptr, which
must have been returned by a previous call to malloc(), calloc(), or realloc().
Otherwise, or if free(ptr) has already been called before, undefined behavior occurs.
If ptr is NULL, no operation is performed

This function (ft_memdel) takes in the parameter of the address of a pointer. The zone
pointed to should be liberated with free. THe pointer is then set to NULL. */

void	(ft_memdel(void **ap)
{
	free(*ap);
	*ap = NULL;
}

// Found this online as a different implementation

void	ft_memdel(void **ap)
{
	if (!ap || !*ap)
		return ;
	free(*ap);
	*ap = 0;
}
