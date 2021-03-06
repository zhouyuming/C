#include <stdio.h>
#include <signal.h>

int main(int argc, char* argv[])
{
    signal(SIGINT, SIG_IGN);
    for (;;);
    return 0;
}