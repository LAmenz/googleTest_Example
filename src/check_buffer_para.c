#include "check_buffer_para.h"

/*
* Check if the length of the buffer is within the range
* param: length of the buffer 
* return : boolean
*/
boolean Check_range(uint8 lent)
{
    return ((lent < MAX_BUF_LENT) &&\
        (lent > MIN_BUF_LENT))  ? TRUE : FALSE;

}

/*
* Check if the given buffer is not null
* param: pointer to the buffer 
* return : boolean
*/
boolean isPointer_NotNull(uint8* buff)
{
    return (buff != NULL_PTR) ? TRUE : FALSE;
}