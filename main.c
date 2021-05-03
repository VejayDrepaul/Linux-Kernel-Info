#include <stdio.h>
#include <stdlib.h>
#include <sys/utsname.h>
#include <errno.h>

int main()
{
    struct utsname kern;
    
    if (uname(&kern) < 0) {
        perror("uname");
        fprintf(stderr, "Error in uname : %d\n", errno);
        exit(EXIT_FAILURE);
    } 
	else {
        // Print Node Info
        printf("--------------- Kernel Information ---------------\n");
        printf("Operating System: %s\n", kern.nodename);
        printf("System Name: %s\n", kern.sysname);
        printf("Version: %s\n", kern.version);
        printf("Kernel Release: %s\n", kern.release);
        printf("Architecture: %s\n", kern.machine);
	printf("Domain name: %s\n", kern.__domainname);
	printf("--------------------------------------------------\n");
	exit(EXIT_SUCCESS);
    }
	
	return 0;
}
