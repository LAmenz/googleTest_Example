add_test( UT__Save_Data.SaveValidData D:/my_project/build/test_save_data.exe [==[--gtest_filter=UT__Save_Data.SaveValidData]==] --gtest_also_run_disabled_tests)
set_tests_properties( UT__Save_Data.SaveValidData PROPERTIES WORKING_DIRECTORY D:/my_project/build SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
add_test( UT__Save_Data.invalidDataLent D:/my_project/build/test_save_data.exe [==[--gtest_filter=UT__Save_Data.invalidDataLent]==] --gtest_also_run_disabled_tests)
set_tests_properties( UT__Save_Data.invalidDataLent PROPERTIES WORKING_DIRECTORY D:/my_project/build SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
set( test_save_data_TESTS UT__Save_Data.SaveValidData UT__Save_Data.invalidDataLent)
