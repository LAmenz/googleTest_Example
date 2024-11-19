#if !defined CHECK_BUFFER_PARAMOCKS_H
#define CHECK_BUFFER_PARAMOCKS_H

#include "gmock/gmock.h"
#include "check_buffer_para_Includes.h"

/*---  --------------------------------------------------------------------------------------------------------------*/
using ::testing::Mock;
using ::testing::_;


/**********************************************************************************************************************
 *  Stubbed Functions
 *********************************************************************************************************************/

namespace Mocks {

/* Namespace Mocks */
}


/**********************************************************************************************************************
 *  Google Test Mocks
 *********************************************************************************************************************/


/* Test Object Env */
class check_buffer_paraEnv : public ::testing::Test
{
  public:
    check_buffer_paraEnv()
    {}

    virtual void SetUpMocksDefaultBehavior()
    {}

    virtual void SetUp()
    {
      SetUpMocksDefaultBehavior();
    }

    virtual void FinalizeTestStep(std::string MessageOnExpectationError = "", boolean resetCslMock = false)
    {
      SetUpMocksDefaultBehavior();
    }


    ~check_buffer_paraEnv()
    {}

};

#endif