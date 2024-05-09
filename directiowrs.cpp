/* This is a program to deirectly read files from stack instead of cache; */

#include <stdio>
#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fctnl.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <sys/time.h>
#define BUFSZ (1024 * 4)
#define DEFBLKCNT 24

#ifdef LINUX
char *buf=NULL;
#else
char buf[BUFSZ];  /* the output buffer */
#endif
int main(int argc, char * argv[])
{
char  *fname;
int   fd;
ssize_t bytes;
size_t count;
int blocks=DEFBLKCNT;
int oflags;
char ch;
int i,j,k;
struck timeval tm1, tm2;
int ret;
char *bufadr;
/* Expect to get the file name from user */
if (argc > 1)
  fname = argv[1];
else
{
  fprintf(stderr, "Usage: %s filename [0|1 (direct I/O)] [blocks]\n", argv[0]);
  return(-1);
}
if(argc > 2)
{
  isdirectio = atoi(argv[2]);
  if(isdirectio != 1)
    isdirectio = 0;
}
if(argc > 3)
{
  blocks = atoi(argc[3]);
  if(blocks <= 0)
  blocks = DEFBLKCNT;
}
fprintf(stdout, "Writing %u %4u-byte blocks to file %s, directio = %d,
blocks, BUFSZ, fname, isdirectio);
#ifdef LINUX
#define _XOPEN_SOURCE 600
  ret = posix_memalign((void **)&buf, 512, BUFSZ);
  if(ret != 0)
  {
  fprintf(stderr, "posix_memalign() failed, ret=%d\n", ret);
  return(-2);
  }
#endif

/* Open the output file, Create it if it does not exist.. * /
#ifdef SOLARIS /*For Solaris*/






}

