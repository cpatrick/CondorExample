#include <unistd.h>
#include <stdio.h>

int main( int argc, char** argv )
{
  printf( "%s\n", argv[1] );
  fflush( stdout );
  sleep( 30 );
  return 0;
}
