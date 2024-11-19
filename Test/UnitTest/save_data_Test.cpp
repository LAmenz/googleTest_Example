#include "save_data_TestEnv.h"

class UT__Save_Data_ : public Save_Data_EnvDefaultFixture
{
public:
  void SetUp()
  {
    /* Base setUp. */
    Save_Data_EnvDefaultFixture::SetUp();

  }

};


class UT__Save_Data : public UT__Save_Data_
{
};

/*!
 * Verify that write_data saved the data .
 *
 * Test steps:
 * - Call Check write_data with valid buffer and lent memory.
 * - Assert that the data is saved.
 *
 * \trace write_data
 */

TEST_F(UT__Save_Data, SaveValidData)
{
  uint8 data[5];
  /* Prepare the required mocks */
  EXPECT_CALL(*_Check_Buffer_Para, isPointer_NotNull(data))
    .WillOnce(Return(TRUE));
  EXPECT_CALL(*_Check_Buffer_Para, Check_range(5))
    .WillOnce(Return(TRUE));

  /* Execute the API under test */
  write_data(data,5);
  /* Assert that the data is saved */
  for(int i = 0; i < 5; i++)
    ASSERT_EQ(data_to_be_saved[i] , data[i]);
}

/*!
 * Verify that write_data return the right value .
 *
 * Test steps:
 * - Call Check write_data with valid buffer and lent memory.
 * - Assert that the data is saved.
 *
 * \trace write_data
 */

TEST_F(UT__Save_Data, invalidDataLent)
{
  uint8 data[5]={1};
  /* Prepare the required mocks */
  EXPECT_CALL(*_Check_Buffer_Para, isPointer_NotNull(data))
    .WillOnce(Return(TRUE));
  EXPECT_CALL(*_Check_Buffer_Para, Check_range(9))
    .WillOnce(Return(FALSE));

  for(int i = 0; i < 8; i++)
    data_to_be_saved[i] = 0;
  /* Execute the API under test */
  write_data(data,9);
  /* Assert that the data is saved */
  for(int i = 0; i < 8; i++)
    ASSERT_EQ(data_to_be_saved[i] , 0);
}