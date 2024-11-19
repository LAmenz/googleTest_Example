#include "save_data.h"
#include "check_buffer_para.h"

uint8 data_to_be_saved[MAX_BUF_LENT];

void write_data(uint8* data_buf, uint8 lent)
{
    if(isPointer_NotNull(data_buf))
    {
    /* Check if length of the data is within the range. */
    if(Check_range(lent))
    {
        for(int i = 0; i < lent; i++)
            data_to_be_saved[i] = data_buf[i];
    }
    }
}
