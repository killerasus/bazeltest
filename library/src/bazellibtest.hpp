#pragma once

namespace bazellibtest {

class YetAnotherClass {
    public:

    explicit YetAnotherClass(int value_);
    ~YetAnotherClass() = default;
    YetAnotherClass(YetAnotherClass&& rhs) noexcept = default;
    YetAnotherClass& operator=(const YetAnotherClass& rhs) = default;
    YetAnotherClass& operator=(YetAnotherClass&& rhs) noexcept = default;

    int DoAction() const;

    private:
    int value{0};
};

}
