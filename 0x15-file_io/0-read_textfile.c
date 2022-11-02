#include "main.h"
#include <stdlib.h>
/**
  * read_textfile - reads a text file and prints it  to POSIX std output.
  * @filename:filename.
  * @letters: numbers of letters printed.
  * Return: numbers of letters printed,otherwise 0.
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rd, wr;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));

	if (!buff)
		return (0);

	rd = read(fd, buf, letters);
	wr = write(STDOUT_FILENO, buf, rd);

	free(buf);

	close(fd);

	return (wr);
}
