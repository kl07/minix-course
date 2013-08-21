#include <sys/cdefs.h>
#include "namespace.h"
#include <lib.h>

#include<unistd.h>
#include<stdio.h>
void printmymessg(){
	message m;

	return(_syscall(PM_PROC_NR, MYMESSG, &m));

}

