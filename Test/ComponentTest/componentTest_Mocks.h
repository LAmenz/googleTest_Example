#if !defined COMPONENT_TEST_MOCKS_H
#define COMPONENT_TEST_MOCKS_H

#include "gmock/gmock.h"
#include "componentTest_Includes.h"

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
class component_test_Env : public ::testing::Test
{
  public:
    component_test_Env()
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


    ~component_test_Env()
    {}

};

#endif