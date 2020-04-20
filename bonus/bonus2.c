//BONUS 2
#include <stdio.h>
#include <unistd.h>

int main()
{
    int pid = fork();
    if (pid == 0)
    {
        printf("ID Child = %d\n", pid);
        fflush(stdout);
    }
    else
    {
        printf("Parent ID = %d\n", pid);
        fflush(stdout);
    }
    return 0;
}