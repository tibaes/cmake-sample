#include <iostream>
#include <memory>

class someSharing
{
private:
    struct Hidden;
    std::unique_ptr<Hidden> secrets;
public:
    someSharing(/* args */);
    ~someSharing();
    void whisper();
};
