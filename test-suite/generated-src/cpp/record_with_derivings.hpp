// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from derivings.djinni

#pragma once

#include <cstdint>
#include <string>
#include <utility>

struct RecordWithDerivings final {

    int32_t key1;

    std::string key2;

    bool operator==(const RecordWithDerivings & other) const;
    bool operator!=(const RecordWithDerivings & other) const;
    bool operator<(const RecordWithDerivings & other) const;
    bool operator>(const RecordWithDerivings & other) const;
    bool operator<=(const RecordWithDerivings & other) const;
    bool operator>=(const RecordWithDerivings & other) const;

    RecordWithDerivings(
            int32_t key1,
            std::string key2) :
                key1(std::move(key1)),
                key2(std::move(key2)) {
    }
};