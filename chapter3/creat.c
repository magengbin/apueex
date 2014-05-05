#include "apue.h"
#include <fcntl.h>

int main( int argc, char *argv[] )
{
	int fd;
	if( argc != 2 )
	{
		err_quit( "usage: create file_name" );
	}
	fd = creat( argv[1],O_RDWR );
	
	write( fd,"ma name is magengbin!\n",23 );
	return 0;
}
