#if !defined(CHECK_BUFFER_PARATESTENV_H)
# define CHECK_BUFFER_PARATESTENV_H

/* Include GTest and GMock Frameworks */
# include "gtest/gtest.h"
#include "gmock/gmock.h"

/* Include C++ Headers */
#include <list>

extern "C"
{
  /* Include C Headers */
  #include "../../src/check_buffer_para.h"
  # include "../../src/data_type.h"
}

# include "check_buffer_paraMocks.h" 


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


class heck_Buffer_Para_Check_Range : public check_buffer_paraEnv
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

class heck_Buffer_Para_Check_Buffer_Pointer : public check_buffer_paraEnv
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