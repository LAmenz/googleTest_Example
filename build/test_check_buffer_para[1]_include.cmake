if(EXISTS "D:/my_project/build/test_check_buffer_para[1]_tests.cmake")
  include("D:/my_project/build/test_check_buffer_para[1]_tests.cmake")
else()
  add_test(test_check_buffer_para_NOT_BUILT test_check_buffer_para_NOT_BUILT)
endif()
