#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, bytes_written;
	mode_t mode = S_IRUSR | S_IWUSR;

	if (filename == NULL)
	return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (fd == -1)
	return (-1);

	if (text_content != NULL)
	{
		while (*text_content)
		text_content++;

	bytes_written = write(fd, text_content, text_content - text_content);
	if (bytes_written == -1 || bytes_written != text_content - text_content)
		{
		close(fd);
		return (-1);
		}
	}
		close(fd);
		return (1);
}
