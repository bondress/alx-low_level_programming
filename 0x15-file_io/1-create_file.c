#include "main.h"

/**
 * create_file - creates a file.
 * @filename: pointer to the name of the new file
 * @text_content: pointer to a NULL terminated string to
 * write to the file
 *
 * Return: -1 on failure (file cannot be created,
 * file cannot be written, write "fails", etc...)
 * or if filename is NULL. Otherwise, return 1.
 */
int create_file(const char *filename, char *text_content)
{
	int of, wf, tot = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (tot = 0; text_content[tot];)
			tot++;
	}

	of = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wf = write(of, text_content, tot);

	if (of == -1  || wf == -1)
		return (-1);

	close(of);

	return (1);
}
