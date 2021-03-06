#include <sys/wait.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void work()
{
    printf("Working Child %d \n",getpid());
}

//Set of PID of Children
int size = 5;
pid_t PIDs[5];
int ret = 0;

//the most common way people give up their power is by thinking they don't have any

int main()
{

    printf("Processes Creation \n");

    ret = fork();

    if (ret == -1)
    {
        perror("Error In fork ! \n");
        exit(EXIT_FAILURE);
    }
    else if (ret == 0)
    {
        work();
    }
    else
    {

    }

    wait(0);

    printf("Done \n");
    return 0;
}