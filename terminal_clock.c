#include <stdio.h>
#include <time.h>
#include <unistd.h>

int main()
{
    while (1)
    {
        printf("\x1b[1F");

        printf("\x1b[2K");

        time_t time_sec = time(NULL);

        char *time_str = ctime(&time_sec);

        printf("%s", time_str);

        usleep(100000);
    }
}