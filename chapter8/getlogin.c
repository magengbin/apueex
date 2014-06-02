#include "apue.h"
#include <unistd.h>

int main(void)
{
	char *buf;
	buf = getlogin();
	printf("%s\n", buf);
	exit(0);
}
