//BONUS 3
#include <stdio.h>
#include <unistd.h>

int main()
{
    int pB, pC;
    pB = fork();
    if (pB == 0)
    {
        printf("pid A = %d\n", getppid());
    }
    else
    {
        pC = fork();
        if (pC == 0)
            getchar();
        else
            getchar();
    }
}