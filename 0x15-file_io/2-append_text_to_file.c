#include "main.h"

/**
 * append_text_to_file - appends text at the end
 * of a file.
 * @filename: pointer to the name of the file
 * @text_content: pointer to the NUL terminated
 * string to add at the end of the file
 *
 * Return: -1 on failure, if filename is NULL,
 * if text_content is NULL, if file does not exist
 * or if you do not have the required permissions
 * to write the file. Otherwise, return 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int of, wf, tot = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (tot = 0; text_content[tot];)
			tot++;
	}

	of = open(filename, O_WRONLY | O_APPEND);
	wf = write(of, text_content, tot);

	if (of == -1 || wf == -1)
		return (-1);

	close(of);

	return (1);
}
