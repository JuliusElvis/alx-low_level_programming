#include <stdio.h>
/**
 * Entry point
 */
int main(void)
{
fprintf(stderr,"Size of a char:%d bytes(s)\n", sizeof(char));
fprintf(stderr,"Size of an int:%d bytes(s)\n", sizeof(int));
fprintf(stderr,"Size of a long int:%d bytes(s)\n", sizeof(long int));
fprintf(stderr,"Size of a long long int:%d bytes(s)\n", sizeof(long long int));
fprintf(stderr,"Size of a float:%d bytes(s)\n", sizeof(float));
return (0);
}
