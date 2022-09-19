# library

This package will be compiled into a library. In the `BUILD` file, you find the description of the library project:

```bazel
cc_library(
    name = "bazellibtest",
    srcs = ["src/bazellibtest.cpp"],
    hdrs = ["src/bazellibtest.hpp"],
    visibility = ["//main:__pkg__"],
)
```

It states that a C++ Lib will be built, referenced by the name `bazellibtest`. It will be visible to the package `main`.
