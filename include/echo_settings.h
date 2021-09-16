#pragma once

#include <cstddef>

namespace echo
{
    constexpr unsigned short serverPortNumber = 54321;
    constexpr std::size_t maxDataSize = 256;
    constexpr int maxClientNmb = 2;
    enum ServerError
    {
        SERVER_FINISH_OK = 0,
        SERVER_BINDING_ERROR = 1,
    };
}