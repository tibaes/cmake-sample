#include <string>

struct someHiddenStatic {
    std::string message;
    someHiddenStatic();
    ~someHiddenStatic();
    void reveal();
};
