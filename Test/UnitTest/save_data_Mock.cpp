#define SAVE_DATAMOCKS_SOURCE

/**********************************************************************************************************************
  WARNING
-----------------------------------------------------------------------------------------------------------------------
  This file is automatically generated. Any changes will be lost if the Mocks for this TestObject are re-generated!
**********************************************************************************************************************/


/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "save_data_Mock.h"

/**********************************************************************************************************************
 *  Instantiate static mock members
 *********************************************************************************************************************/
/*--- Instantiate static mock members -------------------------------------------------------------------------------*/
std::unique_ptr<MockCheck_Buffer_Para> Save_DataEnv::_Check_Buffer_Para;


/**********************************************************************************************************************
 *  Definition of constructor and destructor
 *********************************************************************************************************************/
MockCheck_Buffer_Para::MockCheck_Buffer_Para() {}
MockCheck_Buffer_Para::~MockCheck_Buffer_Para() {}


/**********************************************************************************************************************
 *  Function definitions
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  Stubbed Functions
 *********************************************************************************************************************/
/*--- stubbed functions ---------------------------------------------------------------------------------------------*/
extern "C" 
{

boolean Check_range(uint8 lent)
{
  return Save_DataEnv::_Check_Buffer_Para.get()->Check_range(lent);
}

boolean isPointer_NotNull(uint8* buff)
{
  return Save_DataEnv::_Check_Buffer_Para.get()->isPointer_NotNull(buff);
}

}