/*
 * debug.h
 *
 *  Created on: Apr 7, 2017
 *      Author: skannan
 */

#ifndef DEBUG_H_
#define DEBUG_H_

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/mman.h>
#include <fcntl.h>
#include <limits.h>
#include <sys/mman.h>
#include <inttypes.h>
#include <pthread.h>
#include <stdio.h>
#include <iostream>


void DEBUG(const char* format, ... );
void DEBUG_T(const char* format, ... );



#define DBG_COMPACTION



#ifdef DBG_COMPACTION
#define DBG_PRINT(format, a...)		\
	printf(" DEBUG:%4d %-30s: " format "\n", __LINE__, __FUNCTION__, ##a)
#else
#define DBG_PRINT(format, a...)
#endif

#endif /* DEBUG_H_ */
