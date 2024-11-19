#include "check_buffer_para_TestEnv.h"

class UT__Check_Buffer_Para__CheckRange : public heck_Buffer_Para_Check_Range
{
protected:

public:
  void SetUp()
  {
    /* Generic SetUp for all Testcases */
    heck_Buffer_Para_Check_Range::SetUp();
  }
};

/*!
 * Verify that Check_range return the right value .
 *
 * Test steps:
 * - Call Check range function with valid lent memory.
 * - Assert that the return value is TRUE.
 *
 * \trace Check_range
 */
TEST_F(UT__Check_Buffer_Para__CheckRange, ValidMemoryLent)
{ 
    boolean ret_val = FALSE;
    ret_val = Check_range(MAX_BUF_LENT - 1);

    ASSERT_EQ(ret_val, TRUE);
}

/*!
 * Verify that Check_range return the right value .
 *
 * Test steps:
 * - Call Check range function with a lent memory above the range .
 * - Assert that the return value is FALSE.
 *
 * \trace Check_range
 */
TEST_F(UT__Check_Buffer_Para__CheckRange, AboveRangeMemoryLent)
{ 
    boolean ret_val = FALSE;
    ret_val = Check_range(MAX_BUF_LENT);

    ASSERT_EQ(ret_val, FALSE);
}

/*!
 * Verify that Check_range return the right value .
 *
 * Test steps:
 * - Call Check range function with a lent memory bellow the range.
 * - Assert that the return value is FALSE.
 *
 * \trace Check_range
 */
TEST_F(UT__Check_Buffer_Para__CheckRange, BellowRangeMemoryLent)
{ 
    boolean ret_val = FALSE;
    ret_val = Check_range(MIN_BUF_LENT);

    ASSERT_EQ(ret_val, FALSE);
}



class UT__Check_Buffer_Para__CheckPointer : public heck_Buffer_Para_Check_Buffer_Pointer
{
protected:

public:
  void SetUp()
  {
    /* Generic SetUp for all Testcases */
    heck_Buffer_Para_Check_Buffer_Pointer::SetUp();
  }
};

/*!
 * Verify that isPointer_NotNull return True .
 *
 * Test steps:
 * - Call isPointer_NotNull function with a no NULL pointer.
 * - Assert that the return value is TRUE.
 *
 * \trace isPointer_NotNull
 */
TEST_F(UT__Check_Buffer_Para__CheckPointer, NoNULLBuffer)
{   uint8 inArg[MAX_BUF_LENT - 1]; 
    boolean ret_val = FALSE;
    ret_val = isPointer_NotNull(inArg);

    ASSERT_EQ(ret_val, TRUE);
}

/*!
 * Verify that isPointer_NotNull return False .
 *
 * Test steps:
 * - Call isPointer_NotNull function with a NULL pointer.
 * - Assert that the return value is FALSE.
 *
 * \trace isPointer_NotNull
 */
TEST_F(UT__Check_Buffer_Para__CheckPointer, NULLBuffer)
{   
    boolean ret_val = FALSE;
    ret_val = isPointer_NotNull((uint8*)NULL_PTR);

    ASSERT_EQ(ret_val, FALSE);
}