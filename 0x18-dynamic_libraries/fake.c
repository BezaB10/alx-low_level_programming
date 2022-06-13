#include <stdio.h>
#include <unistd.h>
int dprintf(int fd, const char *format, ...){return (printf("Congratulations, you win the Jackpot!%c", 10));}
ssize_t write(int fd, const void *buf, size_t count)
{return (write(2,"Congratulations, you win the Jackpot!", 38));}
