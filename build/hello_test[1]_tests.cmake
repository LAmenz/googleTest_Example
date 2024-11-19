add_test( UT__Check_Buffer_Para__CheckRange.ValidMemoryLent D:/my_project/build/hello_test.exe [==[--gtest_filter=UT__Check_Buffer_Para__CheckRange.ValidMemoryLent]==] --gtest_also_run_disabled_tests)
set_tests_properties( UT__Check_Buffer_Para__CheckRange.ValidMemoryLent PROPERTIES WORKING_DIRECTORY D:/my_project/build SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
add_test( UT__Check_Buffer_Para__CheckRange.AboveRangeMemoryLent D:/my_project/build/hello_test.exe [==[--gtest_filter=UT__Check_Buffer_Para__CheckRange.AboveRangeMemoryLent]==] --gtest_also_run_disabled_tests)
set_tests_properties( UT__Check_Buffer_Para__CheckRange.AboveRangeMemoryLent PROPERTIES WORKING_DIRECTORY D:/my_project/build SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
add_test( UT__Check_Buffer_Para__CheckRange.BellowRangeMemoryLent D:/my_project/build/hello_test.exe [==[--gtest_filter=UT__Check_Buffer_Para__CheckRange.BellowRangeMemoryLent]==] --gtest_also_run_disabled_tests)
set_tests_properties( UT__Check_Buffer_Para__CheckRange.BellowRangeMemoryLent PROPERTIES WORKING_DIRECTORY D:/my_project/build SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
add_test( UT__Check_Buffer_Para__CheckPointer.NoNULLBuffer D:/my_project/build/hello_test.exe [==[--gtest_filter=UT__Check_Buffer_Para__CheckPointer.NoNULLBuffer]==] --gtest_also_run_disabled_tests)
set_tests_properties( UT__Check_Buffer_Para__CheckPointer.NoNULLBuffer PROPERTIES WORKING_DIRECTORY D:/my_project/build SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
add_test( UT__Check_Buffer_Para__CheckPointer.NULLBuffer D:/my_project/build/hello_test.exe [==[--gtest_filter=UT__Check_Buffer_Para__CheckPointer.NULLBuffer]==] --gtest_also_run_disabled_tests)
set_tests_properties( UT__Check_Buffer_Para__CheckPointer.NULLBuffer PROPERTIES WORKING_DIRECTORY D:/my_project/build SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
add_test( HelloTest.BasicAssertions D:/my_project/build/hello_test.exe [==[--gtest_filter=HelloTest.BasicAssertions]==] --gtest_also_run_disabled_tests)
set_tests_properties( HelloTest.BasicAssertions PROPERTIES WORKING_DIRECTORY D:/my_project/build SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
set( hello_test_TESTS UT__Check_Buffer_Para__CheckRange.ValidMemoryLent UT__Check_Buffer_Para__CheckRange.AboveRangeMemoryLent UT__Check_Buffer_Para__CheckRange.BellowRangeMemoryLent UT__Check_Buffer_Para__CheckPointer.NoNULLBuffer UT__Check_Buffer_Para__CheckPointer.NULLBuffer HelloTest.BasicAssertions)
