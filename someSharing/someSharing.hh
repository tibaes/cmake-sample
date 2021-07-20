#include <memory>
#include "someSharing_export.h"

class SOMESHARING_EXPORT someSharing
{
private:
    struct Hidden;
    std::unique_ptr<Hidden> secrets;
public:
    someSharing(/* args */);
    ~someSharing();
    void whisper();
    void reveal();
};
