#if !defined(SAVE_DATA_TESTENV_H)
# define SAVE_DATA_TESTENV_H

/* Include GTest and GMock Frameworks */
# include "gtest/gtest.h"
# include "gmock/gmock.h"

/* Include C++ Headers */
# include <list>

extern "C"
{
  /* Include C Headers */
  # include "../../src/data_type.h"

  #include "../../src/save_data.h"
}




/* Include the generated Mocks and test environment for vFotaH_DownloadHdlr. */
# include "save_data_Mock.h" 

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

/* Import from ::testing namespace. */
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
using ::testing::Expectation;
using ::testing::ElementsAreArray;
using ::testing::NotNull;

class Save_Data_EnvDefaultFixture : public Save_DataEnv
{
protected:

public:
  void SetUp()
  {
  }
};

#endif