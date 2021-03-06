
#pragma once

#include <bond/core/bond_version.h>

#if BOND_VERSION < 0x0700
#error This file was generated by a newer version of the Bond compiler and is incompatible with your version of the Bond library.
#endif

#if BOND_MIN_CODEGEN_VERSION > 0x0b00
#error This file was generated by an older version of the Bond compiler and is incompatible with your version of the Bond library.
#endif

#include <bond/core/config.h>
#include <bond/core/containers.h>


#include "basic_types_types.h"
#include "namespace_basic_types_types.h"

namespace tests
{
    
    struct dummy
    {
        int32_t count;
        
        dummy()
          : count()
        {
        }

        
        // Compiler generated copy ctor OK
        dummy(const dummy&) = default;
        
#if defined(_MSC_VER) && (_MSC_VER < 1900)  // Versions of MSVC prior to 1900 do not support = default for move ctors
        dummy(dummy&& other)
          : count(std::move(other.count))
        {
        }
#else
        dummy(dummy&&) = default;
#endif
        
        
#if defined(_MSC_VER) && (_MSC_VER < 1900)  // Versions of MSVC prior to 1900 do not support = default for move ctors
        dummy& operator=(dummy other)
        {
            other.swap(*this);
            return *this;
        }
#else
        // Compiler generated operator= OK
        dummy& operator=(const dummy&) = default;
        dummy& operator=(dummy&&) = default;
#endif

        bool operator==(const dummy& other) const
        {
            return true
                && (count == other.count);
        }

        bool operator!=(const dummy& other) const
        {
            return !(*this == other);
        }

        void swap(dummy& other)
        {
            using std::swap;
            swap(count, other.count);
        }

        struct Schema;

    protected:
        void InitMetadata(const char*, const char*)
        {
        }
    };

    inline void swap(::tests::dummy& left, ::tests::dummy& right)
    {
        left.swap(right);
    }
} // namespace tests

