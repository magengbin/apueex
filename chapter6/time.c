#include "apue.h"
#include <time.h>

int main( void )
{
	time_t		caltime;
	struct tm	*tm;
	char		line[MAXLINE];

	if( ( time( &caltime ) ) == -1 )
		err_sys( "time error" );
	if( ( tm = localtime( &caltime ) ) == NULL )
		err_sys( "localtime error" );
	if( ( strftime( line, MAXLINE, "%Y年 %m月 %d日 %A %X %Z\n", tm ) ) == 0 )
		err_sys( "strftime error" );
	fputs( line, stdout );
	exit( 0 );
}
