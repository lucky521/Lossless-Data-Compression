#include <stdio.h>

FILE *open_binary_file_for_read(char *filename);

FILE *open_binary_file_for_write(char *filename);

int close_binary_file(FILE *file_pt);

int write_buffer_to_file(char *src_buffer, int len, FILE *dst_file_pt);

int read_buffer_from_file(char *dst_buffer, FILE *src_file_pt);
