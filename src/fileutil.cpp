#include "fileutil.h"


FILE *open_binary_file_for_read(char *filename)
{
	return fopen(filename, "rb");
}

FILE *open_binary_file_for_write(char *filename)
{
	return fopen(filename, "wb");
}


int close_binary_file(FILE *file_pt)
{
	if (file_pt == NULL)
		return -1;
	fclose(file_pt);
	return 0;
}


// binary data
int write_buffer_to_file(char *src_buffer, int len, FILE *dst_file_pt)
{
	fwrite(src_buffer, sizeof(char), len, dst_file_pt);
	return 0;
}


// binary data
int read_buffer_from_file(char *dst_buffer, FILE *src_file_pt)
{
	// obtain file size
	int fsize = 0;
	fseek(src_file_pt, 0, SEEK_END);
	fsize = ftell(src_file_pt);
	rewind(src_file_pt);

	fread(dst_buffer, sizeof(char), fsize, src_file_pt);
	return 0;
}






