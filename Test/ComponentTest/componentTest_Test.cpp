#include "componentTest_TestEnv.h"

class UT__Component_Test__SaveData_Succ : public componentTest_save_data_successfully
{
protected:

public:
  void SetUp()
  {
    /* Generic SetUp for all Testcases */
    componentTest_save_data_successfully::SetUp();
  }
};

/*!
 * Verify that the data is saved in the internal buffer  data_to_be_saved.
 *
 * Test steps:
 * - Initialize the internal buffer with 0;
 * - Call write data function with valid buffer and lent memory.
 * - Assert that the saved data in the internal buffer is as expected.
 *
 * \trace write_data
 */
TEST_F(UT__Component_Test__SaveData_Succ, validData)
{ 
  uint8 data[7] = {0};
  for(int i = 0; i < 7; i++)
    data_to_be_saved[i] = 1;

  write_data(data,7);

      /* Assert that the data is saved */
  for(int i = 0; i < 7; i++)
    ASSERT_EQ(data_to_be_saved[i] , 0);
}