#include "apue.h"
#include <fcntl.h>

#define BUFFSIZE 4096

int main( int argc, char *argv[])
{
	int fd;
	int	n;
	char buf[BUFFSIZE];
	if( ( fd = open( "./test.txt",O_RDWR ) ) < 0 )
		err_sys( "open error!" );
	if( ( n = read( fd, buf, BUFFSIZE ) ) < 0 )
		err_sys( "read error!" );
	if( write( STDOUT_FILENO, buf, n ) < 0 )
		err_sys( "write error!" );
	close( fd );
	return 0;

}
