Two ways to run the test.
1. $ bazel test //tests:hello_greet_test --test_output=all
2. $ bazel test ... --test_output=all

OUTPUT:
-------
INFO: Analysed 4 targets (14 packages loaded).
INFO: Found 3 targets and 1 test target...
INFO: From Testing //tests:hello_greet_test:
==================== Test output for //tests:hello_greet_test:
Running main() from gmock_main.cc
[==========] Running 1 test from 1 test case.
[----------] Global test environment set-up.
[----------] 1 test from HelloTest
[ RUN      ] HelloTest.GetGreet
[       OK ] HelloTest.GetGreet (0 ms)
[----------] 1 test from HelloTest (0 ms total)

[----------] Global test environment tear-down
[==========] 1 test from 1 test case ran. (0 ms total)
[  PASSED  ] 1 test.
================================================================================
INFO: Elapsed time: 3.575s, Critical Path: 3.15s
INFO: Build completed successfully, 32 total actions
//tests:hello_greet_test                                                 PASSED in 0.1s

Executed 1 out of 1 test: 1 test passes.
There were tests whose specified size is too big. Use the --test_verbose_timeout_warnings command line option to see which ones these are.
