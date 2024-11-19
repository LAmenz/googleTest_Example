/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/
typedef unsigned char       boolean;        /*        TRUE .. FALSE           */

typedef signed char         sint8;          /*        -128 .. +127            */
typedef unsigned char       uint8;          /*           0 .. 255             */
typedef signed short        sint16;         /*      -32768 .. +32767          */
typedef unsigned short      uint16;         /*           0 .. 65535           */
typedef signed long         sint32;         /* -2147483648 .. +2147483647     */
typedef unsigned long       uint32;         /*           0 .. 4294967295      */

typedef unsigned long       uint8_least;    /* At least 8 bit                 */
typedef unsigned long       uint16_least;   /* At least 16 bit                */
typedef unsigned long       uint32_least;   /* At least 32 bit                */
typedef signed long         sint8_least;    /* At least 7 bit + 1 bit sign    */
typedef signed long         sint16_least;   /* At least 15 bit + 1 bit sign   */
typedef signed long         sint32_least;   /* At least 31 bit + 1 bit sign   */



#ifndef TRUE
  #define TRUE   1u
#endif

#ifndef FALSE
  #define FALSE  0u
#endif

/* NULL_PTR define with a void pointer to zero definition */
#ifndef NULL_PTR
  #define NULL_PTR  ((void *)0)
#endif