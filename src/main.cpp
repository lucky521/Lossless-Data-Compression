#include <unistd.h>
#include <stdio.h>
#include <getopt.h>  

int main(int argc, char * const argv[])  
{  
	// Read command line parameter
	int opt;  
	int algorith_class;
	int source_type;
	int isCompress;
	while ((opt = getopt(argc, argv, "t:s:f:cx")) != -1) {  
		printf("opt = %c, optarg = %s, optind = %d, argv[%d] = %s\n",   
				opt, optarg, optind, optind, argv[optind]);  
	switch(opt)
	{
		case 't':
			printf(" algorith_class=%s\n",optarg);
			break;
		case 'c':
			printf(" Do compress");
			isCompress = 1;
			break;
		case 'x':
			printf(" Do decompress");
			isCompress = 2;
			break;
	}

	// Do steps


	}  
	return 0;  
}  
