#include<stdio.h>
#include<unistd.h>
void main()
{
    int id1,id2;
    printf("\nCurrent Process root id = %d",getppid());
    printf("\n Current process id = %d\n",getpid());
    id1=fork();
    if(id1 == 0)
    {
        printf("\n1st Child \n");
        printf("Parent id= %d\tChild id= %d\n",getppid(),getpid());
        id2=fork();
        if(id2 == 0)
        {
            printf("\n2nd Child \n");
            printf("Parent id= %d\tChild id= %d\n",getppid(),getpid());
        }
    }
    
}




