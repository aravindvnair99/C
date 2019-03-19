/*#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void main() {
	int pid;
	pid = fork();
	if (pid == 0) {
		execlp("/home/examcs1/Desktop/prime", "prime", 3, NULL);
		exit(0);
	} else if (pid < 0) {
		printf("Error");
		exit(1);
	}
	else {
	int returnStatus;    
    waitpid(pid, &returnStatus, 0);

    if (returnStatus == 0) 
    {
       printf("The child process terminated normally.");    
    }

    if (returnStatus == 1)      
    {
       printf("The child process terminated with an error!");    
    }
		printf("Parent finished executing.");
		exit(1);
	}
} */



#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void main() {
	int pid;
	pid = fork();
	if (pid == 0) {
		execlp("/home/examcs1/Desktop/prime", "prime", NULL);
		exit(0);
	} else if (pid < 0) {
		printf("Error");
		exit(1);
	}
	else {
		wait();
		int returnStatus;    
    	waitpid(pid, &returnStatus, 0);
    	if (returnStatus == 0) {
       		printf("\nThe child process terminated normally.");    
    	}
		if (returnStatus == 1) {
       		printf("\nThe child process terminated with an error!");    
    	}
		printf("\nParent finished executing.\n\n");
		exit(1);
	}
	exit(1);
}
