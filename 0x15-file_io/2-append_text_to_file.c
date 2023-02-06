#include "main.h"

/**
* append_text_to_file - appends text at the end of a file
* @filename: filename.
* @text_content: added content.
*
* Return: 1 if the file exists. -1 if the fails does not exist
* or if it fails.
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fw;
	int notes;
	int bw;

	if (!filename)
	return (-1);

	fw = open(filename, O_WRONLY | O_APPEND);

	if (fw == -1)
	return (-1);

	if (text_content)
	{
	for (notes = 0; text_content[notes]; notes++)
	;

	bw = write(fw, text_content, notes);

	if (bw == -1)
	return (-1);
	}

	close(fw);

	return (1);
}

