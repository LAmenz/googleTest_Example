if(EXISTS "D:/my_project/build/component_test[1]_tests.cmake")
  include("D:/my_project/build/component_test[1]_tests.cmake")
else()
  add_test(component_test_NOT_BUILT component_test_NOT_BUILT)
endif()