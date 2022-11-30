project(CITEST)
cmake_minimum_required(VERSION 3.16)

add_executable(BuiltExe main.cpp)


enable_testing()
add_test(NAME NoArgs COMMAND BuiltExe)
set_property(TEST NoArgs PROPERTY WILL_FAIL True)

add_test(NAME TwoArgs COMMAND BuiltExe "A" "B")
set_property(TEST TwoArgs PROPERTY WILL_FAIL True)

add_test(NAME TestSingleArg COMMAND BuiltExe "StringA")
