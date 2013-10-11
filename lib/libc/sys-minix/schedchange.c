#include <sys/cdefs.h>
#include "namespace.h"
#include <lib.h>

#include<unistd.h>
#include<stdio.h>
int schedchange(int flag){
	message m;
	m.m1_i1=flag;
	return(_syscall(PM_PROC_NR, SCHEDCHANGE, &m));

}
