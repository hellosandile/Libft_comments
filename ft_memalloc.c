
/* The malloc() function allocates size bytes and returns a
pointer to the allocated memory. The memory is not initialized. If
size is 0, the malloc() returns either NULL, or a pointer value that
can later be successfully passed to free()

This function (ft_memalloc) is designed to allocate and return a "fresh"
zone of memory. The memory allocated is initialized to 0 using our ft_bzero function.
If the allocatoin fails we return NULL. */

void	*ft_memalloc(size_t size)
{
	/* We first make a void variable of pointer m, This is so that we
	   can use the *zone of allocated memory that will be applied to it
	   for any type of data.*/
	void	*m;
	
	/* We then use malloc to allocate memory to our m variable based on the size
	given in the parameter. If the allocation fails we return NULL. Otherwise we
	then run the function ft_bzero on our allocated zone of memory m and give it
	our size parameter. We then return our void variable m. */
	m = malloc(size)l
	if (m == NULL)
		return (NULL);
	ft_bezero(m, size);
	return (m);

}

// Here is another way to do it

void	*ft_memalloc(size_t size)
{
	void	*m;

	if (!(m = malloc(size)))
		return (NULL);
	ft_memset(m, 0, size);
	return (m);
}
