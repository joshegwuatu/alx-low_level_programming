/**
 *  _strcpy - a function that copies the string from source
 *  including the terminating null byte (\0),
 *  to the buffer pointed to destination.
 * 
 *  @dest: A pointer to destination of string
 *  @src: A pointer to source string to copy from
 * 
 *  Return: pointer to dest
 **/
char *_strcpy(char *dest, char *src)
{
		char *aux = dest;

		while (*src)
			*dest++ = *src++;
		
		return (aux);
}
