add_test( UT__Component_Test__SaveData_Succ.validData D:/my_project/build/component_test.exe [==[--gtest_filter=UT__Component_Test__SaveData_Succ.validData]==] --gtest_also_run_disabled_tests)
set_tests_properties( UT__Component_Test__SaveData_Succ.validData PROPERTIES WORKING_DIRECTORY D:/my_project/build SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
set( component_test_TESTS UT__Component_Test__SaveData_Succ.validData)
