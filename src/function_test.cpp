#include <stdio.h>
#include "fileutil.h"

int main()
{
	char wfilename[20];
	sprintf(wfilename, "write_file_tmp.txt");
    FILE *file_test = open_binary_file_for_write(wfilename);	

	char test_buffer[100];
	sprintf(test_buffer, "Here is content of buffer.");
	write_buffer_to_file(test_buffer, 8, file_test);
	close_binary_file(file_test);
	return 0;
}
