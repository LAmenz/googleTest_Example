#if !defined(COMPONENT_TEST_TESTENV_H)
# define COMPONENT_TEST_TESTENV_H

/* Include GTest and GMock Frameworks */
# include "gtest/gtest.h"
#include "gmock/gmock.h"

/* Include C++ Headers */
#include <list>

extern "C"
{
  /* Include C Headers */
  #include "../../src/check_buffer_para.h"
  #include "../../src/save_data.h"
  # include "../../src/data_type.h"
}

# include "componentTest_Mocks.h" 

#if defined (__cplusplus)
extern "C"
{
#endif
#define         TEST_MAX_BUF_LENT                (8)
#define         Test_MIN_BUF_LENT                (1)
extern uint8 data_to_be_saved[TEST_MAX_BUF_LENT];

#if defined (__cplusplus)
}
#endif

using ::testing::Mock;
using ::testing::Return;
using ::testing::ReturnArg;
using ::testing::SetArgPointee;
using ::testing::DoAll;
using ::testing::AnyNumber;
using ::testing::_;
using ::testing::Ne;
using ::testing::Not;
using ::testing::AnyOfArray;
using ::testing::InSequence;
using ::testing::Sequence; 
using ::testing::Invoke; 


class componentTest_save_data_successfully : public component_test_Env
{
protected:
  /* Here you can define variables that are available to all testcases that use this fixture. 
     If you do so, you should initialize them in the SetUp function. */
public:
  void SetUp()
  {
    /* Set-Up default behavior of mocks */
  }
};

#endif