#pragma once

#include <Geode/Geode.hpp>

#ifdef GEODE_IS_WINDOWS
    #ifdef EXAMPLE_API_EXPORTING
        #define EXAMPLE_API_DLL __declspec(dllexport)
    #else
        #define EXAMPLE_API_DLL __declspec(dllimport)
    #endif
#else
    #define EXAMPLE_API_DLL __attribute__((visibility("default")))
#endif
