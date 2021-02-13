#include <sys/wait.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>




void work(int i)
{
    printf("Working Child %d\n", i);
}

//Set of PID of Children
int size = 5;
pid_t PIDs[5];
int ret = 0;



int main()
{

    printf("Processes Creation \n");

    ret = fork();

    if (ret == -1){
        perror("Error In fork ! \n");
        exit(EXIT_FAILURE);
    }else if (ret == 0 )
    {
        
    }
    
    
    wait(0);

    printf("Done \n");
    return 0;
}