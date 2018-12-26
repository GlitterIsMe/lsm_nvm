#include "util/debug.h"

//#define DEBUG

//Trouble shooting debug
//use only if trouble shooting
//some specific functions
void DEBUG_T(const char* format, ... ) {
#ifdef DEBUG
		FILE *fp;
        va_list args;
        va_start( args, format );
        vfprintf( stdout, format, args );
        va_end( args );
#endif
}