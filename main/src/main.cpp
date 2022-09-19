#include <iostream>

#include "../../library/src/bazellibtest.hpp"

int main (int argc, char** argv) {
    using namespace bazellibtest;

    YetAnotherClass yac(21);
    std::cout << "Hello world Bazel! " << yac.DoAction() << std::endl;

    return 0;
}
