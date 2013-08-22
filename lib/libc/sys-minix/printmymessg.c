#include <sys/cdefs.h>
#include "namespace.h"
#include <lib.h>

#include<unistd.h>
#include<stdio.h>
void printmymessg(int x,int y){
	message m;
	m.m1_i1=x;
	m.m1_i2=y;
	return(_syscall(PM_PROC_NR, MYMESSG, &m));

}

