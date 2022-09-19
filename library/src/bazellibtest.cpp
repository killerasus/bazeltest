#include "bazellibtest.hpp"

namespace bazellibtest {

    YetAnotherClass::YetAnotherClass(int value_):value(value_){}

    int YetAnotherClass::DoAction() const{
        return 2*value;
    }
}
