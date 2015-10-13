#ifndef _RELIB_H_
#define _RELIB_H_

#ifndef _MAIN_C_
#define PUBLIC extern
#else
#define PUBLIC
#endif

#ifdef  _DEBUG_MODE_
#define DEBUG(format,...)  printf(format, ##_VA_ARGS__)
#else
#define DEBUG(format,...)
#endif


#endif




