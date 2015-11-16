#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <wait.h>


int procesos (int nProc)
{
	int i;
	for (i=1; i <=nProc; i++ )
		if(fork() ==0)
	return i;
	return 0;
}

int main ()

{
	int status;
	int pid, i;
	int nProc;

   printf(" Ingrese el  No proceso ");
    scanf("%d",&nProc);
	pid = procesos(nProc);
      
 	if(pid==0){
	for (i = 0; i < nProc; i++){
	wait(&status);
	}
	printf("Soy el padre %d\n",pid,getpid());
	exit (0);
      
}else{
	
      printf("Soy el hijo %d\n",getpid());
	exit (0);
}

	}
 



