cc_library(
    name = "hello_greet_lib",
    srcs = ["hello_greet_lib.cc"],
    hdrs = ["hello_greet_lib.h"],
)

cc_binary(
    name = "hello_world",
    srcs = ["hello_world.cc"],
    deps = [":hello_greet_lib"],
)