#ifndef MAIN_HDR
#define MAIN_HDR

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/*
 * AUTHOR: ODIONYE OBIAJULU WILLIAMS
 * DESCRIPTION: This header file conntains
 *	Prototypes for all the function
 *	written into the 0x15 Directory
 *
 */

ssize_t read_textfile(const char *filename, size_t letters);
#endif
