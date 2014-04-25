#ifndef VAR_INT_H
#define VAR_INT_H

#include <vector>

namespace Networking
{
    class VarInt
    {
    public:
        VarInt();
        VarInt(char *data);
        ~VarInt();

        std::vector<char> mData;
    };
}

#endif
