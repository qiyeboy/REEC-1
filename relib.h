#ifndef _RELIB_H_
#define _RELIB_H_

/* define compiler specific symbols */
#if defined ( __CC_ARM )
#define __ASM __asm /*!< asm keyword for armcc */
#define __INLINE __inline /*!< inline keyword for armcc */
#elif defined ( __ICCARM__ )
#define __ASM __asm /*!< asm keyword for iarcc */
#define __INLINE inline /*!< inline keyword for iarcc. Only avaiable in High optimization mode! */
#define __nop __no_operation /*!< no operation intrinsic in iarcc */
#elif defined ( __GNUC__ )
#define __ASM asm /*!< asm keyword for gcc */
#define __INLINE inline /*!< inline keyword for gcc*/
#endif

#ifndef _REEC_C_
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




