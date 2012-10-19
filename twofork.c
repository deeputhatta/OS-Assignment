#include<stdio.h>
#include<unistd.h>
void main()
{
    int id1,id2,id3,id4;
    printf("\nCurrent Process root id = %d",getppid());
    printf("\n Current process id = %d\n",getpid());
    id1=fork();
    id2=fork();
    if(id1 == 0)
    {
        printf("\n1st Child \n");
        printf("Parent id= %d\tChild id= %d\n",getppid(),getpid());
    }
    if(id2 == 0)
    {
        printf("\n2nd Child \n");
        printf("Parent id= %d\tChild id= %d\n",getppid(),getpid());
        id3=fork();
        id4=fork();
        if(id3 == 0)
        {
            printf("\n1st Child of previous 2nd child \n");
            printf("Parent id= %d\tChild id= %d\n",getppid(),getpid());
        }
        if(id2 == 0)
        {
            printf("\n2nd Child of previous 2nd child  \n");
            printf("Parent id= %d\tChild id= %d\n",getppid(),getpid());
        }
    }
}

