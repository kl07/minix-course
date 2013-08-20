#include "kernel/system.h"
#include<minix/endpoint.h>
#include<stdio.h>
/**************************************************************
 * 					printmymessg
 **************************************************************/
int printmymessg(struct proc * caller_ptr,message *m_ptr){
	fprintf(stderr,"inside printmymessg\n");
	return(OK);
}
